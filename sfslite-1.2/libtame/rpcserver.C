
# 1 "rpcserver.T"

// -*-c++-*-

#include "tame_rpcserver.h"
#include "parseopt.h"

namespace tame {

  server_t::server_t (int fd, int v) : _verbosity (v)
  {
    tcp_nodelay (fd);
    _x = axprt_stream::alloc (fd);
  }

  
# 15 "rpcserver.T"
class server_t__runloop__closure_t : public closure_t { public:   server_t__runloop__closure_t (server_t *_self) : closure_t ("rpcserver.T", "server_t::runloop"), _self (_self),  _stack (_self), _args () {}   typedef void  (server_t::*method_type_t) (ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (server_t *_self) : rv ("rpcserver.T", 19)  {}      rendezvous_t<> rv;      event< svccb *>::ptr ev;      svccb *sbp;      ptr< asrv > s;   };   struct args_t {     args_t () {}   };   server_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 15 "rpcserver.T"
void 
server_t::runloop(ptr<closure_t> __cls_g)
{
    
# 18 "rpcserver.T"
  server_t__runloop__closure_t *__cls;   ptr<server_t__runloop__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<server_t__runloop__closure_t> (this);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&server_t::runloop);   } else {     __cls =     reinterpret_cast<server_t__runloop__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    rendezvous_t<> &rv = __cls->_stack.rv;    event< svccb *>::ptr &ev = __cls->_stack.ev;    svccb *&sbp = __cls->_stack.sbp;    ptr< asrv > &s = __cls->_stack.s;   switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto server_t__runloop__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 23 "rpcserver.T"

    
    ev = mkevent (rv, sbp);
    ev->set_reuse (true);
    
    s = asrv::alloc (_x, get_prog (), ev);
    
    do {
      
# 31 "rpcserver.T"
server_t__runloop__label_1: do {   if (!(rv)._ti_next_trigger ()) {     __cls->set_jumpto (1);       (rv)._ti_set_join_cls (__cls_r);       return;   } else {     (rv)._ti_clear_join_method ();   } } while (0);
# 31 "rpcserver.T"

      if (sbp) {
	dispatch (sbp);
      }
    } while (sbp);
    
    if (_verbosity >= VERB_MED)
      warn << "EOF on socket received; deleting server...\n";

    ev->finish ();
    
    delete this;
  
# 43 "rpcserver.T"
  do {   __cls->end_of_scope_checks (43);   return;   } while (0);
# 43 "rpcserver.T"
}

  void
  server_factory_t::new_connection (int lfd)
  {
    sockaddr_in sin;
    socklen_t sinlen = sizeof (sin);
    bzero (&sin, sinlen);
    int newfd = accept (lfd, reinterpret_cast<sockaddr *> (&sin), &sinlen);
    if (newfd >= 0) {
      if (_verbosity >= VERB_MED)
	warn ("accepting connection from %s\n", inet_ntoa (sin.sin_addr));
      server_t *srv = alloc_server (newfd, _verbosity);
      srv->runloop ();
    } else if (errno != EAGAIN) {
      if (_verbosity >= VERB_LOW)
	warn ("accept failure: %m\n");
    }
  }

  void
  server_factory_t::run (const str &s, evb_t done)
  {
    int port;
    if (!convertint (s, &port)) {
      warn << "Could not convert string to port: " << s << "\n";
      done->trigger (false);
    } else if (port <= 0 || port > int (USHRT_MAX)) {
      warn << "Invalid port specified: " << port << "\n";
      done->trigger (false);
    } else {
      run (u_int (port), done);
    }
  }

  
# 78 "rpcserver.T"
class server_factory_t__run_T__closure_t : public closure_t { public:   server_factory_t__run_T__closure_t (server_factory_t *_self,  u_int port,  evb_t done) : closure_t ("rpcserver.T", "server_factory_t::run_T"), _self (_self),  _stack (_self, port, done), _args (port, done) {}   typedef void  (server_factory_t::*method_type_t) ( u_int ,  evb_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.port, _args.done, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (server_factory_t *_self,  u_int port,  evb_t done) : ret (false), go (true), rv ("rpcserver.T", 86)  {}      int fd;      event<>::ptr ev;      bool ret;      bool go;      rendezvous_t< bool > rv;   };   struct args_t {     args_t ( u_int port,  evb_t done) : port (port), done (done) {}      u_int port;      evb_t done;   };   server_factory_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 78 "rpcserver.T"
void 
server_factory_t::run_T( u_int __tame_port,  evb_t __tame_done, ptr<closure_t> __cls_g)
{
    
# 81 "rpcserver.T"
  server_factory_t__run_T__closure_t *__cls;   ptr<server_factory_t__run_T__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<server_factory_t__run_T__closure_t> (this, __tame_port, __tame_done);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&server_factory_t::run_T);   } else {     __cls =     reinterpret_cast<server_factory_t__run_T__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &fd = __cls->_stack.fd;    event<>::ptr &ev = __cls->_stack.ev;    bool &ret = __cls->_stack.ret;    bool &go = __cls->_stack.go;    rendezvous_t< bool > &rv = __cls->_stack.rv;    u_int &port = __cls->_args.port;    evb_t &done = __cls->_args.done;    use_reference (port);     use_reference (done);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto server_factory_t__run_T__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 87 "rpcserver.T"

    
    fd = inetsocket (SOCK_STREAM, port);
    if (fd <= 0) {
      warn << "cannot allocate TCP port: " << port << "\n";
    } else {
      ret = true;
      
      sigcb (SIGINT, mkevent (rv, false));
      sigcb (SIGTERM, mkevent (rv, false));
      
      close_on_exec (fd);
      listen (fd, 200);
      
      ev = mkevent (rv, true);
      ev->set_reuse (true);
      
      fdcb (fd, selread, ev);
      
      while (go) {
	
# 107 "rpcserver.T"
server_factory_t__run_T__label_1: do {   if (!(rv)._ti_next_trigger (go)) {     __cls->set_jumpto (1);       (rv)._ti_set_join_cls (__cls_r);       return;   } else {     (rv)._ti_clear_join_method ();   } } while (0);
# 107 "rpcserver.T"

	if (go) 
	  new_connection (fd);
      }
      ev->finish ();
    }
    done->trigger (ret);
  
# 114 "rpcserver.T"
  do {   __cls->end_of_scope_checks (114);   return;   } while (0);
# 114 "rpcserver.T"
}
  
};
