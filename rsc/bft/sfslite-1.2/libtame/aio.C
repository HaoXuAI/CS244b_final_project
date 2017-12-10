
# 1 "aio.T"
// -*-c++-*-

#include "tame_aio.h"

namespace tame {
  
  
# 7 "aio.T"
class aiofh_t__open__closure_t : public closure_t { public:   aiofh_t__open__closure_t (aiofh_t *_self,  const str &fn,  int flg,  int mode,  evi_t ev) : closure_t ("aio.T", "aiofh_t::open"), _self (_self),  _stack (_self, fn, flg, mode, ev), _args (fn, flg, mode, ev) {}   typedef void  (aiofh_t::*method_type_t) ( const str &,  int ,  int ,  evi_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.fn, _args.flg, _args.mode, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (aiofh_t *_self,  const str &fn,  int flg,  int mode,  evi_t ev) {}      int rc;   };   struct args_t {     args_t ( const str &fn,  int flg,  int mode,  evi_t ev) : fn (fn), flg (flg), mode (mode), ev (ev) {}      const str &fn;      int flg;      int mode;      evi_t ev;   };   aiofh_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 7 "aio.T"
void 
aiofh_t::open( const str &__tame_fn,  int __tame_flg,  int __tame_mode,  evi_t __tame_ev, ptr<closure_t> __cls_g)
{
    
# 10 "aio.T"
  aiofh_t__open__closure_t *__cls;   ptr<aiofh_t__open__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<aiofh_t__open__closure_t> (this, __tame_fn, __tame_flg, __tame_mode, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&aiofh_t::open);   } else {     __cls =     reinterpret_cast<aiofh_t__open__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &rc = __cls->_stack.rc;    const str &fn = __cls->_args.fn;    int &flg = __cls->_args.flg;    int &mode = __cls->_args.mode;    evi_t &ev = __cls->_args.ev;    use_reference (fn);     use_reference (flg);     use_reference (mode);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto aiofh_t__open__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 12 "aio.T"

    _fn = fn;
    
# 14 "aio.T"
  do {     do {       closure_wrapper<aiofh_t__open__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 14);     __cls->set_jumpto (1); 
# 14 "aio.T"
 _aiod->open (fn, flg, mode, mkevent (_fh, rc)); 
# 14 "aio.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  aiofh_t__open__label_1:       ;   } while (0);
# 14 "aio.T"

    ev->trigger (rc);
  
# 16 "aio.T"
  do {   __cls->end_of_scope_checks (16);   return;   } while (0);
# 16 "aio.T"
}

  
# 18 "aio.T"
class aiofh_t__read__closure_t : public closure_t { public:   aiofh_t__read__closure_t (aiofh_t *_self,  size_t sz,  aio_read_ev_t ev) : closure_t ("aio.T", "aiofh_t::read"), _self (_self),  _stack (_self, sz, ev), _args (sz, ev) {}   typedef void  (aiofh_t::*method_type_t) ( size_t ,  aio_read_ev_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.sz, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (aiofh_t *_self,  size_t sz,  aio_read_ev_t ev) {}      ptr< aiobuf > rbuf;      ssize_t rsz;      int rc;   };   struct args_t {     args_t ( size_t sz,  aio_read_ev_t ev) : sz (sz), ev (ev) {}      size_t sz;      aio_read_ev_t ev;   };   aiofh_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 18 "aio.T"
void 
aiofh_t::read( size_t __tame_sz,  aio_read_ev_t __tame_ev, ptr<closure_t> __cls_g)
{
    
# 21 "aio.T"
  aiofh_t__read__closure_t *__cls;   ptr<aiofh_t__read__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<aiofh_t__read__closure_t> (this, __tame_sz, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&aiofh_t::read);   } else {     __cls =     reinterpret_cast<aiofh_t__read__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    ptr< aiobuf > &rbuf = __cls->_stack.rbuf;    ssize_t &rsz = __cls->_stack.rsz;    int &rc = __cls->_stack.rc;    size_t &sz = __cls->_args.sz;    aio_read_ev_t &ev = __cls->_args.ev;    use_reference (sz);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto aiofh_t__read__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 25 "aio.T"

    assert (_fh);
    assert (_aiod);

    if (!_buf || sz > _bufsz) {
      _buf = _aiod->bufalloc (sz);
      _bufsz = sz;
    }
    if (!_buf) {
      rsz = -1;
    } else {
      
# 36 "aio.T"
  do {     do {       closure_wrapper<aiofh_t__read__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 36);     __cls->set_jumpto (1); 
# 36 "aio.T"
 _fh->read (_off, _buf, mkevent (rbuf, rsz, rc)); 
# 36 "aio.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  aiofh_t__read__label_1:       ;   } while (0);
# 36 "aio.T"

      if (rc != 0) {
	warn ("Read error on file (%s): %m\n", _fn.cstr ());
	rsz = -1;
      } else if (rsz < 0) {
	warn ("Read error (short read) on file %s\n", _fn.cstr ());
      } else {
	_off += rsz;
      }
    }
    ev->trigger (rbuf, rsz);
  
# 47 "aio.T"
  do {   __cls->end_of_scope_checks (47);   return;   } while (0);
# 47 "aio.T"
}

  
# 49 "aio.T"
class aiofh_t__close__closure_t : public closure_t { public:   aiofh_t__close__closure_t (aiofh_t *_self,  evi_t::ptr ev) : closure_t ("aio.T", "aiofh_t::close"), _self (_self),  _stack (_self, ev), _args (ev) {}   typedef void  (aiofh_t::*method_type_t) ( evi_t::ptr , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (aiofh_t *_self,  evi_t::ptr ev) {}      int ret;   };   struct args_t {     args_t ( evi_t::ptr ev) : ev (ev) {}      evi_t::ptr ev;   };   aiofh_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 49 "aio.T"
void 
aiofh_t::close( evi_t::ptr __tame_ev, ptr<closure_t> __cls_g)
{
    
# 52 "aio.T"
  aiofh_t__close__closure_t *__cls;   ptr<aiofh_t__close__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<aiofh_t__close__closure_t> (this, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&aiofh_t::close);   } else {     __cls =     reinterpret_cast<aiofh_t__close__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &ret = __cls->_stack.ret;    evi_t::ptr &ev = __cls->_args.ev;    use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto aiofh_t__close__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 54 "aio.T"

    assert (_fh);
    
# 56 "aio.T"
  do {     do {       closure_wrapper<aiofh_t__close__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 56);     __cls->set_jumpto (1); 
# 56 "aio.T"
 
      _fh->close (mkevent (ret)); 
      _fh = NULL;
    
# 59 "aio.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  aiofh_t__close__label_1:       ;   } while (0);
# 59 "aio.T"

    if (ev)
      ev->trigger (ret);
  
# 62 "aio.T"
  do {   __cls->end_of_scope_checks (62);   return;   } while (0);
# 62 "aio.T"
}

  aiofh_t::~aiofh_t ()
  {
    if (_fh) {
      close ();
    }
  }

};
