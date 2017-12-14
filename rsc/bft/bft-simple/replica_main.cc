#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/param.h>
#include <unistd.h>
#include <iostream>
#include <sstream>

#include <vector>

#include "th_assert.h"
#include "libbyz.h"
#include "DataAccess.h"
#include "Statistics.h"
#include "Timer.h"

#include "simple.h"
#include "../libbyz/libbyz.h"

using std::cerr;

static int exec_count = 0;
static int max_exec_count = 10000; // how many ops to run tests for
static Timer t;
static CDataAccess dataAccess;

static void dump_profile(int sig) {
  profil(0,0,0,0);

  stats.print_stats();

  exit(0);
}

// Service specific functions.
int exec_command(Byz_req *inb, Byz_rep *outb, Byz_buffer *non_det, int client, bool ro) {
  std::string strQuery = inb->contents;
  cerr << "incoming request: " << strQuery << "\n";

  std::string delim = " ";
  size_t start = 0;
  size_t end = strQuery.find(delim);
  std::vector<std::string> ops;
  while (end != std::string::npos) {
    ops.push_back(strQuery.substr(start, end - start));
    start = end + delim.length();
    end = strQuery.find(delim, start);
  }
  ops.push_back(strQuery.substr(start, end - start));
  std::ostringstream sqlStream;
  std::string sql;
  std::string client_name;
  bool isRead = false;

  if (ops[0] == "GET") {
    client_name = ops[1];
    sqlStream << "SELECT balance FROM account WHERE name='" << client_name << "'";
    isRead = true;
  } else if (ops[0] == "DEPOSIT") {
    client_name = ops[3];
    sqlStream << "UPDATE account set balance=balance+" << ops[1] << " WHERE name='" << client_name << "'";
  } else if (ops[0] == "WITHDRAW") {
    client_name = ops[3];
    sqlStream << "UPDATE account set balance=balance-" << ops[1] << " WHERE name='" << client_name << "'";
  } else {
    cerr << "Wrong request.\n";
    return 0;
  }
  sql = sqlStream.str();
  cerr << "sql: " << sql << "\n";

  bool isSuccess = dataAccess.ExecuteQuery(sql);

  if (isSuccess) {
    cerr << "execute success\n";
    if (!isRead) {
      dataAccess.releaseResult();
      sqlStream.str("");
      sqlStream << "SELECT balance FROM account WHERE name='" << client_name << "'";
      sql = sqlStream.str();
      dataAccess.ExecuteQuery(sql);
    }

    std::ostringstream resStream;

    MYSQL_RES *sqlResult = dataAccess.getSqlResult();
//    //output the table field
//    MYSQL_FIELD *pSQLField = NULL;
//    while (NULL != (pSQLField = mysql_fetch_field(sqlResult))) {
//      cerr << pSQLField->name << "\t";
//    }
//    cerr << "\n";

    //output each row of the table
//    MYSQL_ROW pSQLRow = NULL;
//    while (pSQLRow = mysql_fetch_row(sqlResult)) {
//      //loop to read each line
//      int numCol = mysql_num_fields(sqlResult);
//      for (int i = 0; i < numCol; i++) {
//        std::string strFieldValue = pSQLRow[i];
//        cerr << strFieldValue.c_str() << "\t";
//      }
//      cerr << "\n";
//    }

    MYSQL_ROW pSQLRow = NULL;
    while (pSQLRow = mysql_fetch_row(sqlResult)) {
      //loop to read each line
      int numCol = mysql_num_fields(sqlResult);
      for (int i = 0; i < numCol; i++) {
        std::string strFieldValue = pSQLRow[i];
        cerr << strFieldValue.c_str() << "\t";
        resStream << strFieldValue.c_str() << "\t";
      }
      cerr << "\n";
      resStream << "\n";
    }

    dataAccess.releaseResult();
    std::string res = resStream.str();
    strcpy(outb->contents, res.c_str());
    outb->size = res.size();
  }
  return 0;

//  if(exec_count++ == max_exec_count) {
//    cerr << "starting timing at " << max_exec_count << " ops\n";
//    t.start();
//  } else if(exec_count == 2*max_exec_count) {
//    cerr << "stopping execution at " << 2*max_exec_count << " ops\n";
//    t.stop();
//    cerr << "Throughput: " << max_exec_count/t.elapsed() << "\n";
//    dump_profile(0);
//  }

//#ifdef RETS_GRAPH
//  int size = *((int*)(inb->contents));
//  bzero(outb->contents, size);
//  outb->size = size;
//  return 0;
//#else
//  // A simple service.
//  if (inb->contents[0] == 1) {
//    th_assert(inb->size == 8, "Invalid request");
//    bzero(outb->contents, Simple_size);
//    outb->size = Simple_size;
//    return 0;
//  }
//
//  th_assert((inb->contents[0] == 2 && inb->size == Simple_size) ||
//            (inb->contents[0] == 0 && inb->size == 8), "Invalid request");
//  *((long long*)(outb->contents)) = 0;
//  return 0;
//#endif
}

int main(int argc, char **argv) {
  // Process command line options.
  char config[PATH_MAX];
  char config_priv[PATH_MAX];
  config[0] = config_priv[0] = 0;

  int opt;
  while ((opt = getopt(argc, argv, "c:p:")) != EOF) {
    switch (opt) {
      case 'c':
        strncpy(config, optarg, PATH_MAX);
        break;

      case 'p':
        strncpy(config_priv, optarg, PATH_MAX);
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

  // signal handler to dump profile information.
  struct sigaction act;
  act.sa_handler = dump_profile;
  sigemptyset (&act.sa_mask);
  act.sa_flags = 0;
  sigaction (SIGINT, &act, NULL);
  sigaction (SIGTERM, &act, NULL);

  int mem_size = 205*8192;
  char *mem = (char*)valloc(mem_size);
  bzero(mem, mem_size);

  bool isConnect = dataAccess.ConnectDB("localhost", 3306, "bank_new", "root", "");
  if (isConnect) {
    cerr << "db ready.\n";
  } else {
    cerr << "db is not connected.\n";
    exit(1);
  }

  Byz_init_replica(config, config_priv, mem, mem_size, exec_command, 0, 0);


  stats.zero_stats();

  // Loop executing requests.
  Byz_replica_run();
}


  
