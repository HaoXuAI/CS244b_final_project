
# 1 "pipeline.T"

// -*-c++-*-
/* $Id: tame.h 2077 2006-07-07 18:24:23Z max $ */

#include "tame_pipeline.h"


namespace tame {

pipeliner_t::pipeliner_t (size_t w) : 
 _wsz (w), _rv (__FILE__, __LINE__), _cancelled (false)
{ assert (_wsz > 0); }
  
# 14 "pipeline.T"
class pipeliner_t__wait_n__closure_t : public closure_t { public:   pipeliner_t__wait_n__closure_t (pipeliner_t *_self,  size_t n,  evv_t done) : closure_t ("pipeline.T", "pipeliner_t::wait_n"), _self (_self),  _stack (_self, n, done), _args (n, done) {}   typedef void  (pipeliner_t::*method_type_t) ( size_t ,  evv_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.n, _args.done, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (pipeliner_t *_self,  size_t n,  evv_t done) {}   };   struct args_t {     args_t ( size_t n,  evv_t done) : n (n), done (done) {}      size_t n;      evv_t done;   };   pipeliner_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 14 "pipeline.T"
void 
pipeliner_t::wait_n( size_t __tame_n,  evv_t __tame_done, ptr<closure_t> __cls_g)
{
# 16 "pipeline.T"
  pipeliner_t__wait_n__closure_t *__cls;   ptr<pipeliner_t__wait_n__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<pipeliner_t__wait_n__closure_t> (this, __tame_n, __tame_done);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&pipeliner_t::wait_n);   } else {     __cls =     reinterpret_cast<pipeliner_t__wait_n__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    size_t &n = __cls->_args.n;    evv_t &done = __cls->_args.done;    use_reference (n);     use_reference (done);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto pipeliner_t__wait_n__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 16 "pipeline.T"

  while (_rv.n_triggers_left () > n) {
    
# 18 "pipeline.T"
pipeliner_t__wait_n__label_1: do {   if (!(_rv)._ti_next_trigger ()) {     __cls->set_jumpto (1);       (_rv)._ti_set_join_cls (__cls_r);       return;   } else {     (_rv)._ti_clear_join_method ();   } } while (0);
# 18 "pipeline.T"

  }
  done->trigger ();
# 21 "pipeline.T"
  do {   __cls->end_of_scope_checks (21);   return;   } while (0);
# 21 "pipeline.T"
}

# 23 "pipeline.T"
class pipeliner_t__launch__closure_t : public closure_t { public:   pipeliner_t__launch__closure_t (pipeliner_t *_self,  size_t i,  evv_t done) : closure_t ("pipeline.T", "pipeliner_t::launch"), _self (_self),  _stack (_self, i, done), _args (i, done) {}   typedef void  (pipeliner_t::*method_type_t) ( size_t ,  evv_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.i, _args.done, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (pipeliner_t *_self,  size_t i,  evv_t done) {}   };   struct args_t {     args_t ( size_t i,  evv_t done) : i (i), done (done) {}      size_t i;      evv_t done;   };   pipeliner_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 23 "pipeline.T"
void 
pipeliner_t::launch( size_t __tame_i,  evv_t __tame_done, ptr<closure_t> __cls_g)
{
# 25 "pipeline.T"
  pipeliner_t__launch__closure_t *__cls;   ptr<pipeliner_t__launch__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<pipeliner_t__launch__closure_t> (this, __tame_i, __tame_done);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&pipeliner_t::launch);   } else {     __cls =     reinterpret_cast<pipeliner_t__launch__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    size_t &i = __cls->_args.i;    evv_t &done = __cls->_args.done;    use_reference (i);     use_reference (done);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto pipeliner_t__launch__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 25 "pipeline.T"

  
# 26 "pipeline.T"
  do {     do {       closure_wrapper<pipeliner_t__launch__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 26);     __cls->set_jumpto (1); 
# 26 "pipeline.T"
 wait_n (_wsz - 1, mkevent () ); 
# 26 "pipeline.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  pipeliner_t__launch__label_1:       ;   } while (0);
# 26 "pipeline.T"

  pipeline_op (i, mkevent (_rv) );
  done->trigger ();
# 29 "pipeline.T"
  do {   __cls->end_of_scope_checks (29);   return;   } while (0);
# 29 "pipeline.T"
}

# 31 "pipeline.T"
class pipeliner_t__run__closure_t : public closure_t { public:   pipeliner_t__run__closure_t (pipeliner_t *_self,  evv_t done) : closure_t ("pipeline.T", "pipeliner_t::run"), _self (_self),  _stack (_self, done), _args (done) {}   typedef void  (pipeliner_t::*method_type_t) ( evv_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.done, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (pipeliner_t *_self,  evv_t done) {}      size_t i;   };   struct args_t {     args_t ( evv_t done) : done (done) {}      evv_t done;   };   pipeliner_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 31 "pipeline.T"
void 
pipeliner_t::run( evv_t __tame_done, ptr<closure_t> __cls_g)
{
  
# 34 "pipeline.T"
  pipeliner_t__run__closure_t *__cls;   ptr<pipeliner_t__run__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<pipeliner_t__run__closure_t> (this, __tame_done);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&pipeliner_t::run);   } else {     __cls =     reinterpret_cast<pipeliner_t__run__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    size_t &i = __cls->_stack.i;    evv_t &done = __cls->_args.done;    use_reference (done);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto pipeliner_t__run__label_1;     break;   case 2:     goto pipeliner_t__run__label_2;     break;   default:     panic ("unexpected case.\n");     break;   }
# 36 "pipeline.T"

  for (i = 0; keep_going (i) && !_cancelled; i++) {
    
# 38 "pipeline.T"
  do {     do {       closure_wrapper<pipeliner_t__run__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 38);     __cls->set_jumpto (1); 
# 38 "pipeline.T"
 launch (i, mkevent () ); 
# 38 "pipeline.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  pipeliner_t__run__label_1:       ;   } while (0);
# 38 "pipeline.T"

  }
  
# 40 "pipeline.T"
  do {     do {       closure_wrapper<pipeliner_t__run__closure_t > __cls_g (__cls_r);     __cls->init_block (2, 40);     __cls->set_jumpto (2); 
# 40 "pipeline.T"
 wait_n (0, mkevent () ); 
# 40 "pipeline.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  pipeliner_t__run__label_2:       ;   } while (0);
# 40 "pipeline.T"

  done->trigger ();
# 42 "pipeline.T"
  do {   __cls->end_of_scope_checks (42);   return;   } while (0);
# 42 "pipeline.T"
}

class pipeliner_cb_t : public pipeliner_t {
public:
  pipeliner_cb_t (size_t w, size_t n, pipeline_op_t o)
    : pipeliner_t (w), _n_calls (n), _op (o) {}

protected:
  void pipeline_op (size_t i, evv_t cb, CLOSURE);
  bool keep_going (size_t i) const { return i < _n_calls; }

private:
  size_t _n_calls;
  pipeline_op_t _op;

};

# 59 "pipeline.T"
class pipeliner_cb_t__pipeline_op__closure_t : public closure_t { public:   pipeliner_cb_t__pipeline_op__closure_t (pipeliner_cb_t *_self,  size_t i,  evv_t cb) : closure_t ("pipeline.T", "pipeliner_cb_t::pipeline_op"), _self (_self),  _stack (_self, i, cb), _args (i, cb) {}   typedef void  (pipeliner_cb_t::*method_type_t) ( size_t ,  evv_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.i, _args.cb, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (pipeliner_cb_t *_self,  size_t i,  evv_t cb) {}      bool ok;   };   struct args_t {     args_t ( size_t i,  evv_t cb) : i (i), cb (cb) {}      size_t i;      evv_t cb;   };   pipeliner_cb_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 59 "pipeline.T"
void 
pipeliner_cb_t::pipeline_op( size_t __tame_i,  evv_t __tame_cb, ptr<closure_t> __cls_g)
{
  
# 62 "pipeline.T"
  pipeliner_cb_t__pipeline_op__closure_t *__cls;   ptr<pipeliner_cb_t__pipeline_op__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<pipeliner_cb_t__pipeline_op__closure_t> (this, __tame_i, __tame_cb);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&pipeliner_cb_t::pipeline_op);   } else {     __cls =     reinterpret_cast<pipeliner_cb_t__pipeline_op__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    bool &ok = __cls->_stack.ok;    size_t &i = __cls->_args.i;    evv_t &cb = __cls->_args.cb;    use_reference (i);     use_reference (cb);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto pipeliner_cb_t__pipeline_op__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 64 "pipeline.T"

  
# 65 "pipeline.T"
  do {     do {       closure_wrapper<pipeliner_cb_t__pipeline_op__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 65);     __cls->set_jumpto (1); 
# 65 "pipeline.T"
 (*_op) (i, mkevent (ok), NULL); 
# 65 "pipeline.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  pipeliner_cb_t__pipeline_op__label_1:       ;   } while (0);
# 65 "pipeline.T"

  if (!ok) cancel ();
  cb->trigger ();
# 68 "pipeline.T"
  do {   __cls->end_of_scope_checks (68);   return;   } while (0);
# 68 "pipeline.T"
}

# 70 "pipeline.T"
class do_pipeline__closure_t : public closure_t { public:   do_pipeline__closure_t ( size_t w,  size_t n,  pipeline_op_t op,  evv_t done) : closure_t ("pipeline.T", "do_pipeline"),  _stack (w, n, op, done), _args (w, n, op, done) {}   void reenter ()   {     do_pipeline (_args.w, _args.n, _args.op, _args.done, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( size_t w,  size_t n,  pipeline_op_t op,  evv_t done) : ppl (w, n, op)  {}      pipeliner_cb_t ppl;   };   struct args_t {     args_t ( size_t w,  size_t n,  pipeline_op_t op,  evv_t done) : w (w), n (n), op (op), done (done) {}      size_t w;      size_t n;      pipeline_op_t op;      evv_t done;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 70 "pipeline.T"
void 
do_pipeline( size_t __tame_w,  size_t __tame_n,  pipeline_op_t __tame_op,  evv_t __tame_done, ptr<closure_t> __cls_g)
{
  
# 73 "pipeline.T"
  do_pipeline__closure_t *__cls;   ptr<do_pipeline__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<do_pipeline__closure_t> (__tame_w, __tame_n, __tame_op, __tame_done);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<do_pipeline__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    pipeliner_cb_t &ppl = __cls->_stack.ppl;    size_t &w = __cls->_args.w;    size_t &n = __cls->_args.n;    pipeline_op_t &op = __cls->_args.op;    evv_t &done = __cls->_args.done;    use_reference (w);     use_reference (n);     use_reference (op);     use_reference (done);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto do_pipeline__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 75 "pipeline.T"

  
# 76 "pipeline.T"
  do {     do {       closure_wrapper<do_pipeline__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 76);     __cls->set_jumpto (1); 
# 76 "pipeline.T"
 ppl.run (mkevent ()); 
# 76 "pipeline.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  do_pipeline__label_1:       ;   } while (0);
# 76 "pipeline.T"

  done->trigger ();
# 78 "pipeline.T"
  do {   __cls->end_of_scope_checks (78);   return;   } while (0);
# 78 "pipeline.T"
}

};
