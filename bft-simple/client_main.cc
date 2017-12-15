#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/param.h>
#include <unistd.h>
#include <vector>
#include <string>

#include "th_assert.h"
#include "Timer.h"
#include "libbyz.h"

#include "Statistics.h"

#include "simple.h"
#include "../libbyz/libbyz.h"

int main(int argc, char **argv) {
  std::string READ_REQUEST = "SELECT * FROM TABLE WHERE ID = 123";
  std::string WRITE_REQUEST = "INSERT";

  char config[PATH_MAX];
  char config_priv[PATH_MAX];
  config[0] = config_priv[0] = 0;
  int num_iter = 1000;
  int option = 0; // null command
  bool read_only = false;
  short port=0; 

  // Process command line options.
  int opt;
  while ((opt = getopt(argc, argv, "c:p:i:nrwom:")) != EOF) {
    switch (opt) {
    case 'i':
      num_iter = atoi(optarg);
      break;

    case 'm':
      port = atoi(optarg);
      break;

    case 'n':
      option = 0;
      break;

    case 'r':
      option = 1;
      break;

    case 'w':
      option = 2;
      break;
    
    case 'o':
      read_only = true;
      break;

    case 'c':
      strncpy(config, optarg, PATH_MAX);
      config[PATH_MAX] = 0;
      break;
    
    case 'p':
      strncpy(config_priv, optarg, PATH_MAX);
      config[PATH_MAX] = 0;
      break;
    
    default:
      fprintf(stderr, "%s -c config_file -p config_priv_file", argv[0]);
      exit(-1);
    }
  }

  if (config[0] == 0) {
    // Try to open default file
    strcpy(config, "./config");
  }

  if (config_priv[0] == 0) {
    // Try to open default file
    char hname[MAXHOSTNAMELEN];
    gethostname(hname, MAXHOSTNAMELEN);
    sprintf(config_priv, "config_private/%s", hname);
  }


  // Initialize client
  Byz_init_client(config, config_priv, port);


  //
  // Loop invoking requests:
  //

  // Allocate requests
  std::vector<Byz_req> requests;
  if (option == 1 || read_only) {
    // read or read_only, send read only requests
    Byz_req req;
    Byz_alloc_request(&req, Simple_size);
    th_assert(Simple_size <= req.size, "Request too big");
    strcpy(req.contents, READ_REQUEST.c_str());
    requests.push_back(req);
  } else {
    // write
    Byz_req req1;
    Byz_alloc_request(&req1, Simple_size);
    th_assert(Simple_size <= req1.size, "Request too big");
    strcpy(req1.contents, WRITE_REQUEST.c_str());
    requests.push_back(req1);
    // read
    Byz_req req2;
    Byz_alloc_request(&req2, Simple_size);
    th_assert(Simple_size <= req2.size, "Request too big");
    // read or read_only, send read only requests
    strcpy(req2.contents, READ_REQUEST.c_str());
    requests.push_back(req2);
  }


  stats.zero_stats();

  Timer t;
  t.start();
  Byz_rep rep;
  int req_i = 0;
  for (int i=0; i < num_iter; i++) {
    // Invoke request
    if (req_i == requests.size()) {
      req_i = 0;
    }
    Byz_invoke(&requests[req_i], &rep, read_only);
    req_i ++;

//    // Check reply
//    th_assert(((option == 2 || option == 0) && rep.size == 8) ||
//      (option == 1 && rep.size == Simple_size), "Invalid reply");
    
    // Free reply
    Byz_free_reply(&rep);
    
    /*    if (i%1000 == 0) {
      printf("%d operations complete\n", i);
      }*/
  }
  t.stop();
  printf("Elapsed time %f for %d iterations of operation %d\n", t.elapsed(), 
   num_iter, option);

  stats.print_stats();

  for (int i=0; i<requests.size(); i ++) {
    Byz_free_request(&requests[i]);
  }
}
  
