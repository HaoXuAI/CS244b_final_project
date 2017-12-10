
# 1 "io.T"

// -*-c++-*-
#include "tame.h"
#include "tame_io.h"
#include "tame_connectors.h"
#include "tame_nlock.h"

struct selop_which_t {
  selop_which_t (int f, selop w) : _fd (f), _which (w) {}
  int _fd;
  selop _which;
};

template<> struct equals<selop_which_t> {
  equals () {}
  bool operator() (const selop_which_t &a, const selop_which_t &b) const
  { return (a._fd == b._fd && a._which == b._which); }
};

template<> struct hashfn<selop_which_t> {
  hashfn () {}
  bool operator() (const selop_which_t &x) const
  { return hash_t ((x._fd << 3) | int (x._which)); }
};

namespace tame {

void
clearread (int fd)
{
  fdcb (fd, selread, NULL);
}

void
clearwrite (int fd)
{
  fdcb (fd, selwrite, NULL);
}

# 40 "io.T"
class sigcb1__closure_t : public closure_t { public:   sigcb1__closure_t ( int sig,  evv_t cb) : closure_t ("io.T", "sigcb1"),  _stack (sig, cb), _args (sig, cb) {}   void reenter ()   {     sigcb1 (_args.sig, _args.cb, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( int sig,  evv_t cb) {}   };   struct args_t {     args_t ( int sig,  evv_t cb) : sig (sig), cb (cb) {}      int sig;      evv_t cb;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 40 "io.T"
void 
sigcb1( int __tame_sig,  evv_t __tame_cb, ptr<closure_t> __cls_g)
{
# 42 "io.T"
  sigcb1__closure_t *__cls;   ptr<sigcb1__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<sigcb1__closure_t> (__tame_sig, __tame_cb);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<sigcb1__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &sig = __cls->_args.sig;    evv_t &cb = __cls->_args.cb;    use_reference (sig);     use_reference (cb);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto sigcb1__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 42 "io.T"

  
# 43 "io.T"
  do {     do {       closure_wrapper<sigcb1__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 43);     __cls->set_jumpto (1); 
# 43 "io.T"
 sigcb (sig, connector::cnc (mkevent (), cb)); 
# 43 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  sigcb1__label_1:       ;   } while (0);
# 43 "io.T"

  sigcb (sig, NULL);
  cb->trigger ();
# 46 "io.T"
  do {   __cls->end_of_scope_checks (46);   return;   } while (0);
# 46 "io.T"
}


void
waitwrite (int fd, evv_t cb)
{
  fdcb1(fd, selwrite, cb);
}

void
waitread (int fd, evv_t cb)
{
  fdcb1(fd, selread, cb);
}


# 62 "io.T"
class iofd_t__on__closure_t : public closure_t { public:   iofd_t__on__closure_t (iofd_t *_self,  evv_t cb) : closure_t ("io.T", "iofd_t::on"), _self (_self),  _stack (_self, cb), _args (cb) {}   typedef void  (iofd_t::*method_type_t) ( evv_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.cb, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (iofd_t *_self,  evv_t cb) : oc (OUTCOME_SUCC)  {}      outcome_t oc;   };   struct args_t {     args_t ( evv_t cb) : cb (cb) {}      evv_t cb;   };   iofd_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 62 "io.T"
void 
iofd_t::on( evv_t __tame_cb, ptr<closure_t> __cls_g)
{
  
# 65 "io.T"
  iofd_t__on__closure_t *__cls;   ptr<iofd_t__on__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<iofd_t__on__closure_t> (this, __tame_cb);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&iofd_t::on);   } else {     __cls =     reinterpret_cast<iofd_t__on__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    outcome_t &oc = __cls->_stack.oc;    evv_t &cb = __cls->_args.cb;    use_reference (cb);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto iofd_t__on__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 67 "io.T"

  _on = true;
  
# 69 "io.T"
  do {     do {       closure_wrapper<iofd_t__on__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 69);     __cls->set_jumpto (1); 
# 69 "io.T"
 fdcb (_fd, _op, connector::cnc (mkevent (), cb, &oc)); 
# 69 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  iofd_t__on__label_1:       ;   } while (0);
# 69 "io.T"

  _on = false;
  if (oc != OUTCOME_CANCELLED) {
    cb->trigger ();
  }
  if (!_on) {
    off (false);
  }
# 77 "io.T"
  do {   __cls->end_of_scope_checks (77);   return;   } while (0);
# 77 "io.T"
}

void
iofd_t::off (bool check)
{
  if (_on || !check) {
    fdcb (_fd, _op, NULL);
    _on = false;
  }
}

typedef enum { READ, WRITE, ENDPROG, POKE } ev_t;

void
iofd_sticky_t::on ()
{
  if (!_on && _ev)
    fdcb (_fd, _op, _ev);

  if (_ev) 
    _on = true;
}

void
iofd_sticky_t::off ()
{
  if (_on)
    fdcb (_fd, _op, NULL);

  _on = false;
}

void
iofd_sticky_t::finish ()
{
  off ();
  _ev = NULL;
}

# 116 "io.T"
class proxy__closure_t : public closure_t { public:   proxy__closure_t ( int infd,  int outfd,  evv_t ev) : closure_t ("io.T", "proxy"),  _stack (infd, outfd, ev), _args (infd, outfd, ev) {}   void reenter ()   {     proxy (_args.infd, _args.outfd, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( int infd,  int outfd,  evv_t ev) : px (New refcounted<std_proxy_t> ())  {}      ref< std_proxy_t > px;   };   struct args_t {     args_t ( int infd,  int outfd,  evv_t ev) : infd (infd), outfd (outfd), ev (ev) {}      int infd;      int outfd;      evv_t ev;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 116 "io.T"
void 
proxy( int __tame_infd,  int __tame_outfd,  evv_t __tame_ev, ptr<closure_t> __cls_g)
{
  
# 119 "io.T"
  proxy__closure_t *__cls;   ptr<proxy__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<proxy__closure_t> (__tame_infd, __tame_outfd, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<proxy__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    ref< std_proxy_t > &px = __cls->_stack.px;    int &infd = __cls->_args.infd;    int &outfd = __cls->_args.outfd;    evv_t &ev = __cls->_args.ev;    use_reference (infd);     use_reference (outfd);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto proxy__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 121 "io.T"

  
# 122 "io.T"
  do {     do {       closure_wrapper<proxy__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 122);     __cls->set_jumpto (1); 
# 122 "io.T"
 px->go (infd, outfd, mkevent ()); 
# 122 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  proxy__label_1:       ;   } while (0);
# 122 "io.T"

  ev->trigger ();
# 124 "io.T"
  do {   __cls->end_of_scope_checks (124);   return;   } while (0);
# 124 "io.T"
}

bool
std_proxy_t::is_readable () const
{
  return (_sz > _buf.resid ());
}

bool
std_proxy_t::is_writable () const 
{
  return (_buf.resid () > 0);
}

int
std_proxy_t::v_read (int fd)
{
  return _buf.input (fd, _sz - _buf.resid ());
}

int 
std_proxy_t::v_write (int fd)
{
  return _buf.output (fd);
}

std_proxy_t::std_proxy_t (const str &d, ssize_t s) : 
  proxy_t (d), 
  _sz (s > 0 ? s : 0x4000) {}

std_proxy_t::~std_proxy_t () {}

void
proxy_t::do_debug (const str &msg) const
{
  if (msg && _debug_level > 0) {
    str s = _debug_name;
    if (!s) 
      s = "<anonymous>";
    warn << s << ": " << msg;
    if (msg[msg.len () - 1] != '\n')
      warnx << "\n";
  }
}

# 169 "io.T"
class proxy_t__go__closure_t : public closure_t { public:   proxy_t__go__closure_t (proxy_t *_self,  int infd,  int outfd,  evv_t ev) : closure_t ("io.T", "proxy_t::go"), _self (_self),  _stack (_self, infd, outfd, ev), _args (infd, outfd, ev) {}   typedef void  (proxy_t::*method_type_t) ( int ,  int ,  evv_t , ptr<closure_t>);   void set_method_pointer (method_type_t m) { _method = m; }   void reenter ()   {     ((*_self).*_method)  (_args.infd, _args.outfd, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t (proxy_t *_self,  int infd,  int outfd,  evv_t ev) : rv ("io.T", 173), err (false), read (infd, selread), write (outfd, selwrite), cancelled (false), hold (mkref (_self))  {}      rendezvous_t< ev_t > rv;      ev_t which;      int rc;      bool err;      iofd_sticky_t read;      iofd_sticky_t write;      bool cancelled;      str s;      ptr< proxy_t > hold;   };   struct args_t {     args_t ( int infd,  int outfd,  evv_t ev) : infd (infd), outfd (outfd), ev (ev) {}      int infd;      int outfd;      evv_t ev;   };   proxy_t *_self;   stack_t _stack;   args_t _args;   method_type_t _method;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 169 "io.T"
void 
proxy_t::go( int __tame_infd,  int __tame_outfd,  evv_t __tame_ev, ptr<closure_t> __cls_g)
{
  
# 172 "io.T"
  proxy_t__go__closure_t *__cls;   ptr<proxy_t__go__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<proxy_t__go__closure_t> (this, __tame_infd, __tame_outfd, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;     __cls->set_method_pointer (&proxy_t::go);   } else {     __cls =     reinterpret_cast<proxy_t__go__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    rendezvous_t< ev_t > &rv = __cls->_stack.rv;    ev_t &which = __cls->_stack.which;    int &rc = __cls->_stack.rc;    bool &err = __cls->_stack.err;    iofd_sticky_t &read = __cls->_stack.read;    iofd_sticky_t &write = __cls->_stack.write;    bool &cancelled = __cls->_stack.cancelled;    str &s = __cls->_stack.s;    int &infd = __cls->_args.infd;    int &outfd = __cls->_args.outfd;    evv_t &ev = __cls->_args.ev;    use_reference (infd);     use_reference (outfd);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto proxy_t__go__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 181 "io.T"


  // If the parent process gives up on us, then we'll get a callback here
  ev->set_cancel_notifier (mkevent (rv, ENDPROG));

  read.setev (mkevent (rv, READ));
  write.setev (mkevent (rv, WRITE));

  _poke_ev = mkevent (rv, POKE);
  _poke_ev->set_reuse (true);

  while (!err && (!(is_eof() || cancelled) || is_writable ())) {
    
    if (is_readable () && !is_eof ()) read.on ();
    else read.off ();
    
    if (is_writable ()) write.on ();
    else write.off ();

    
# 200 "io.T"
proxy_t__go__label_1: do {   if (!(rv)._ti_next_trigger (which)) {     __cls->set_jumpto (1);       (rv)._ti_set_join_cls (__cls_r);       return;   } else {     (rv)._ti_clear_join_method ();   } } while (0);
# 200 "io.T"


    switch (which) {
    case POKE:
      break;
    case READ: 
      if ((rc = v_read (read.fd())) == 0) {
	do_debug ("EOF on socket");
	set_eof ();
      } else if (rc < 0) {
	if (read_error (&s)) {
	  warn ("read error: %s\n", s.cstr ());
	  err = true;
	} else if (errno != EAGAIN) {
	  warn ("read error: %m\n");
	  err = true;
	}
      }
      do_debug (strbuf ("read() => (%d,%d)", rc, errno));
      break;
    case WRITE:
      if ((rc = v_write (write.fd())) < 0) {
	if (write_error (&s)) {
	  warn ("write error: %s\n", s.cstr ());
	  err = true;
	} else if (errno != EAGAIN) {
	  warn ("write error: %m\n");
	  err = true;
	}
      }
      do_debug (strbuf ("write() => (%d,%d)", rc, errno));
      break;
    case ENDPROG:
      do_debug ("end program");
      cancelled = true;
      break;
    default:
      panic ("unexpected case.\n");
    }
  }

  do_debug ("leaving proxy loop");

  read.finish ();
  write.finish ();
  _poke_ev = NULL;

  ev->trigger ();
  rv.cancel (); // for the timer (if necessary )
# 249 "io.T"
  do {   __cls->end_of_scope_checks (249);   return;   } while (0);
# 249 "io.T"
}

bool
proxy_t::poke ()
{
  if (_poke_ev) {
    _poke_ev->trigger ();
    return true;
  } else {
    return false;
  }
}

# 262 "io.T"
class read__closure_t : public closure_t { public:   read__closure_t ( int fd,  char *buf,  size_t sz,  evi_t ev) : closure_t ("io.T", "read"),  _stack (fd, buf, sz, ev), _args (fd, buf, sz, ev) {}   void reenter ()   {     read (_args.fd, _args.buf, _args.sz, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( int fd,  char *buf,  size_t sz,  evi_t ev) {}      int rc;   };   struct args_t {     args_t ( int fd,  char *buf,  size_t sz,  evi_t ev) : fd (fd), buf (buf), sz (sz), ev (ev) {}      int fd;      char *buf;      size_t sz;      evi_t ev;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 262 "io.T"
void 
read( int __tame_fd,  char *__tame_buf,  size_t __tame_sz,  evi_t __tame_ev, ptr<closure_t> __cls_g)
{
  
# 265 "io.T"
  read__closure_t *__cls;   ptr<read__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<read__closure_t> (__tame_fd, __tame_buf, __tame_sz, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<read__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &rc = __cls->_stack.rc;    int &fd = __cls->_args.fd;    char *&buf = __cls->_args.buf;    size_t &sz = __cls->_args.sz;    evi_t &ev = __cls->_args.ev;    use_reference (fd);     use_reference (buf);     use_reference (sz);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto read__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 265 "io.T"


  
# 267 "io.T"
  do {     do {       closure_wrapper<read__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 267);     __cls->set_jumpto (1); 
# 267 "io.T"
 fdcb (fd, selread, mkevent ()); 
# 267 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  read__label_1:       ;   } while (0);
# 267 "io.T"

  fdcb (fd, selread, NULL);
  rc = ::read (fd, buf, sz);
  ev->trigger (rc);
# 271 "io.T"
  do {   __cls->end_of_scope_checks (271);   return;   } while (0);
# 271 "io.T"
}

# 273 "io.T"
class write__closure_t : public closure_t { public:   write__closure_t ( int fd,  const char *buf,  size_t sz,  evi_t ev) : closure_t ("io.T", "write"),  _stack (fd, buf, sz, ev), _args (fd, buf, sz, ev) {}   void reenter ()   {     write (_args.fd, _args.buf, _args.sz, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( int fd,  const char *buf,  size_t sz,  evi_t ev) {}      int rc;   };   struct args_t {     args_t ( int fd,  const char *buf,  size_t sz,  evi_t ev) : fd (fd), buf (buf), sz (sz), ev (ev) {}      int fd;      const char *buf;      size_t sz;      evi_t ev;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 273 "io.T"
void 
write( int __tame_fd,  const char *__tame_buf,  size_t __tame_sz,  evi_t __tame_ev, ptr<closure_t> __cls_g)
{
  
# 276 "io.T"
  write__closure_t *__cls;   ptr<write__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<write__closure_t> (__tame_fd, __tame_buf, __tame_sz, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<write__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &rc = __cls->_stack.rc;    int &fd = __cls->_args.fd;    const char *&buf = __cls->_args.buf;    size_t &sz = __cls->_args.sz;    evi_t &ev = __cls->_args.ev;    use_reference (fd);     use_reference (buf);     use_reference (sz);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto write__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 276 "io.T"


  
# 278 "io.T"
  do {     do {       closure_wrapper<write__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 278);     __cls->set_jumpto (1); 
# 278 "io.T"
 fdcb (fd, selwrite, mkevent ()); 
# 278 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  write__label_1:       ;   } while (0);
# 278 "io.T"

  fdcb (fd, selwrite, NULL);
  rc = ::write (fd, buf, sz);
  ev->trigger (rc);
# 282 "io.T"
  do {   __cls->end_of_scope_checks (282);   return;   } while (0);
# 282 "io.T"
}

# 284 "io.T"
class accept__closure_t : public closure_t { public:   accept__closure_t ( int sockfd,  struct sockaddr *addr,  socklen_t *addrlen,  evi_t ev) : closure_t ("io.T", "accept"),  _stack (sockfd, addr, addrlen, ev), _args (sockfd, addr, addrlen, ev) {}   void reenter ()   {     accept (_args.sockfd, _args.addr, _args.addrlen, _args.ev, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( int sockfd,  struct sockaddr *addr,  socklen_t *addrlen,  evi_t ev) {}      int rc;   };   struct args_t {     args_t ( int sockfd,  struct sockaddr *addr,  socklen_t *addrlen,  evi_t ev) : sockfd (sockfd), addr (addr), addrlen (addrlen), ev (ev) {}      int sockfd;      struct sockaddr *addr;      socklen_t *addrlen;      evi_t ev;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 284 "io.T"
void 
accept( int __tame_sockfd,  struct sockaddr *__tame_addr,  socklen_t *__tame_addrlen,  evi_t __tame_ev, ptr<closure_t> __cls_g)
{
  
# 287 "io.T"
  accept__closure_t *__cls;   ptr<accept__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<accept__closure_t> (__tame_sockfd, __tame_addr, __tame_addrlen, __tame_ev);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<accept__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    int &rc = __cls->_stack.rc;    int &sockfd = __cls->_args.sockfd;    struct sockaddr *&addr = __cls->_args.addr;    socklen_t *&addrlen = __cls->_args.addrlen;    evi_t &ev = __cls->_args.ev;    use_reference (sockfd);     use_reference (addr);     use_reference (addrlen);     use_reference (ev);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto accept__label_1;     break;   default:     panic ("unexpected case.\n");     break;   }
# 287 "io.T"

  
  
# 289 "io.T"
  do {     do {       closure_wrapper<accept__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 289);     __cls->set_jumpto (1); 
# 289 "io.T"
 fdcb (sockfd, selread, mkevent ()); 
# 289 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  accept__label_1:       ;   } while (0);
# 289 "io.T"

  fdcb (sockfd, selread, NULL);
  rc = ::accept (sockfd, addr, addrlen);
  ev->trigger (rc);
# 293 "io.T"
  do {   __cls->end_of_scope_checks (293);   return;   } while (0);
# 293 "io.T"
}
 
  //-----------------------------------------------------------------------

  lock_table_t<selop_which_t> locktab;
  
  
# 299 "io.T"
class fdcb1__closure_t : public closure_t { public:   fdcb1__closure_t ( int fd,  selop which,  evv_t cb) : closure_t ("io.T", "fdcb1"),  _stack (fd, which, cb), _args (fd, which, cb) {}   void reenter ()   {     fdcb1 (_args.fd, _args.which, _args.cb, mkref (this));   } void v_reenter () { reenter (); }   struct stack_t {     stack_t ( int fd,  selop which,  evv_t cb) : sw (fd, which)  {}      ptr< lock_handle_t< selop_which_t > > lh;      selop_which_t sw;   };   struct args_t {     args_t ( int fd,  selop which,  evv_t cb) : fd (fd), which (which), cb (cb) {}      int fd;      selop which;      evv_t cb;   };   stack_t _stack;   args_t _args;   bool is_onstack (const void *p) const   {     return (static_cast<const void *> (&_stack) <= p &&             static_cast<const void *> (&_stack + 1) > p);   } }; 
# 299 "io.T"
void 
fdcb1( int __tame_fd,  selop __tame_which,  evv_t __tame_cb, ptr<closure_t> __cls_g)
{
    
# 302 "io.T"
  fdcb1__closure_t *__cls;   ptr<fdcb1__closure_t > __cls_r;   if (!__cls_g) {     if (tame_check_leaks ()) start_rendezvous_collection ();     __cls_r = New refcounted<fdcb1__closure_t> (__tame_fd, __tame_which, __tame_cb);     if (tame_check_leaks ()) __cls_r->collect_rendezvous ();     __cls = __cls_r;     __cls_g = __cls_r;   } else {     __cls =     reinterpret_cast<fdcb1__closure_t *> (static_cast<closure_t *> (__cls_g));     __cls_r = mkref (__cls);   }    ptr< lock_handle_t< selop_which_t > > &lh = __cls->_stack.lh;    selop_which_t &sw = __cls->_stack.sw;    int &fd = __cls->_args.fd;    selop &which = __cls->_args.which;    evv_t &cb = __cls->_args.cb;    use_reference (fd);     use_reference (which);     use_reference (cb);    switch (__cls->jumpto ()) {   case 0: break;   case 1:     goto fdcb1__label_1;     break;   case 2:     goto fdcb1__label_2;     break;   default:     panic ("unexpected case.\n");     break;   }
# 305 "io.T"


    
# 307 "io.T"
  do {     do {       closure_wrapper<fdcb1__closure_t > __cls_g (__cls_r);     __cls->init_block (1, 307);     __cls->set_jumpto (1); 
# 307 "io.T"
 locktab.acquire (&lh, sw, lock_t::EXCLUSIVE, mkevent ()); 
# 307 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  fdcb1__label_1:       ;   } while (0);
# 307 "io.T"

    
# 308 "io.T"
  do {     do {       closure_wrapper<fdcb1__closure_t > __cls_g (__cls_r);     __cls->init_block (2, 308);     __cls->set_jumpto (2); 
# 308 "io.T"
 fdcb (fd, which, mkevent ()); 
# 308 "io.T"
      if (!__cls->block_dec_count (__FL__))       return;     } while (0);  fdcb1__label_2:       ;   } while (0);
# 308 "io.T"

    fdcb (fd, which, NULL);
    lh->release ();
    cb->trigger ();
  
# 312 "io.T"
  do {   __cls->end_of_scope_checks (312);   return;   } while (0);
# 312 "io.T"
}

  //-----------------------------------------------------------------------

};
