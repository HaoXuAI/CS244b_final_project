
# 1 "lock.T"

// -*-c++-*-
#include "tame_lock.h"
#include "tame_trigger.h"

namespace tame {

lock_t::waiter_t *
lock_t::acquire (lock_t::mode_t m, evv_t cb)
{
  lock_t::waiter_t *ret = NULL;
  bool wait = false;

  assert (m != OPEN);

  if (m == SHARED) {
    if (_mode == OPEN) {
      _mode = SHARED;
      assert (_sharers == 0);
      _sharers = 1;
    } else if (_mode == SHARED) {
      assert (_sharers > 0);
      _sharers ++;
    } else {
      wait = true;
    }
  } else {
    assert (m == EXCLUSIVE);
    if (_mode == OPEN) {
      _mode = EXCLUSIVE;
      assert (_sharers == 0);
    } else {
      wait = true;
    }
  }
  
  /*
   * DEBUG
   warn ("LL acquire %p mode=%d sharers=%d wait=%d\n", 
   this, m, _sharers, wait);
  */
    
  if (wait) {
    ret = New lock_t::waiter_t (m, cb);
    _waiters.insert_tail (ret);
  }

  if (!ret) cb->trigger ();
  return ret;
}

void
lock_t::call (waiter_t *w, bool delay)
{
  _waiters.remove (w);
  evv_t cb (w->_cb);
  delete w;
  if (delay)
    dtrigger (cb);
  else
    cb->trigger ();
}

void
lock_t::cancel (waiter_t *w)
{
  /*
   * DEBUG
   warn ("LL cancel %p\n", this);
  */
  _waiters.remove (w);
  delete w;
}

lock_t::lock_t (mode_t m)
  : _mode (m), _sharers (m == SHARED ? 1 : 0) {}

void
lock_t::release ()
{
  mode_t old_mode = _mode;

  /*
   * DEBUG
  warn ("LL release %p mode=%d sharers=%d\n", this, _mode, _sharers);
  */

  assert (_mode != OPEN);

  if (_mode == SHARED) {
    assert (_sharers > 0);
    if ( -- _sharers == 0) {
      _mode = OPEN;
    }
  } else {
    assert (_sharers == 0);
    _mode = OPEN;
  }

  if (_mode == OPEN) {

    waiter_t *w = _waiters.first;
    if (w) {
      if (w->_mode == SHARED) {

	// In other words, assert that we've plucked all sharers
	// off the list below.  If we haven't, we're in shaky
	// recursive release waters (see below).
	assert (old_mode != SHARED);

	_mode = SHARED;

	waiter_t *n, *p;
	for (p = _waiters.first; p; p = n) {
	  n = _waiters.next (p);
	  if (p->_mode == SHARED) {
	    _sharers ++;

	    // Walter Mundt 8/5/08 points out that calling p's callback has
	    // to take place from the main loop.  If not, then calling
	    // p can release right away, which will recursively call into
	    // this method, failing the above assertion (old_mode != SHARED)
	    // and also fouling our traversal through the list
	    call (p, true);

	  }
	}
      } else {
	assert (w->_mode == EXCLUSIVE);
	_mode = EXCLUSIVE;
	call (w);
      }
    }
  }

}

# 138 "lock.T"
class lock_t__timed_acquire__closure_t : public closure_t { public:   lock_t__timed_acquire__closure_t (lock_t *_self,  lock_t::mode_t m,  u_int s,  u_int ms,  evb_t cb) : closure_t ("lock.T", "lock_t::timed_acquire"), _self (_self),  _stack (_self, m, s, ms, cb), _args (m, s, ms, cb) {}   typedef void  (lock_t::*method_type_t) ( lock_t::mode_t ,  u_int ,  u_int ,  evb_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.m, _args.s, _args.ms, _args.cb, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (lock_t *_self,  lock_t::mode_t m,  u_int s,  u_int ms,  evb_t cb) : rv ("lock.T", 142)  {}      rendezvous_t< bool > rv;      lock_t::waiter_t *w;      bool ok;      timecb_t *tcb;   };   struct args_t {     args_t ( lock_t::mode_t m,  u_int s,  u_int ms,  evb_t cb) : m (m), s (s), ms (ms), cb (cb) {}      lock_t::mode_t m;      u_int s;      u_int ms;      evb_t cb;   };   lock_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 138 "lock.T"
void 
lock_t::timed_acquire( lock_t::mode_t __tame_m,  u_int __tame_s,  u_int __tame_ms,  evb_t __tame_cb, ptr<closure_t> __cls_g)
{
  
# 141 "lock.T"
  lock_t__timed_acquire__closure_t *__cls;   ptr<lock_t__timed_acquire__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<lock_t__timed_acquire__closure_t> (this, __tame_m, __tame_s, __tame_ms, __tame_cb);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&lock_t::timed_acquire);   } else {     __cls =     reinterpret_cast<lock_t__timed_acquire__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    rendezvous_t< bool > &rv = __cls->_stack.rv;    lock_t::waiter_t *&w = __cls->_stack.w;    bool &ok = __cls->_stack.ok;    timecb_t *&tcb = __cls->_stack.tcb;    lock_t::mode_t &m = __cls->_args.m;    u_int &s = __cls->_args.s;    u_int &ms = __cls->_args.ms;    evb_t &cb = __cls->_args.cb;    use_reference (m);     use_reference (s);     use_reference (ms);     use_reference (cb);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto lock_t__timed_acquire__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 146 "lock.T"

  tcb = delaycb (s, ms, mkevent (rv,false));
  w = acquire (m, mkevent (rv,true) );
  
# 149 "lock.T"
lock_t__timed_acquire__label_1: do {   if (!(rv)._ti_next_trigger (ok)) {     __cls->set_jumpto (1);       (rv)._ti_set_join_cls (__cls_r);       return;   } else {     (rv)._ti_clear_join_method ();   } } while (0);
# 149 "lock.T"

  if (!ok) cancel (w);
  else timecb_remove (tcb);
  cb->trigger (ok);
# 153 "lock.T"
  do {   __cls->end_of_scope_checks (153);   return;   } while (0);
# 153 "lock.T"
}

};
