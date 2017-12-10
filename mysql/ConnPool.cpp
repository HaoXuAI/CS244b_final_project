#include "ConnPool.h"
#include <iostream>
#include <string>
#include "stdlib.h"

#define THREAD_NUM 32;
#define CONN_NUM 16;

void* CConnPool::connect(const struct ConnArgs* connArgs)
{
	mysql_thread_init();
	MYSQL* mysql = mysql_init(NULL);
	if (mysql == NULL) {
		cout << "initialize MySql connection failed!\n";
		return NULL;
	}

	unsigned int timeout = 3000;
	mysql_options( mysql, MYSQL_OPT_CONNECT_TIMEOUT, &timeout);
	if (NULL == mysql_real_connect(mysql, connArgs->dbHost.c_str(), connArgs->dbUsr.c_str(), connArgs->dbPass.c_str(), connArgs->dbName.c_str(), connArgs->nPort, NULL, 0)) {
		cout << "connection with MySql failed:" << mysql_error(mysql) << endl;
		mysql_close(mysql);
		mysql_thread_end();
		return NULL;
	}

	return mysql;
}


void CConnPool::execute(CConnPool& connPool, int id, const string strQuery)
{
	MYSQL * mysql = NULL;
	if (!connPool.isFull()) {
		struct ConnArgs arg("127.0.0.1", 3306, "world", "root", "root");
		mysql = static_cast<MYSQL *>(CConnPool::connect(&arg));
		if (mysql) {
			connPool.deposit(mysql);
			connPool.incSize();
		}
	}
	else {
		mysql = static_cast<MYSQL *>(connPool.fetch());
		assert(mysql);
	}

	if (0 != mysql_real_query(mysql, strQuery.c_str(), strQuery.length())) {
		cout << "Query failed: Query = " << strQuery.c_str() << ", error = " << mysql_error(mysql);
		return;
	}

	MYSQL_RES* result = mysql_store_result(mysql);
	if (result == NULL) {
		cout << "Failed to get result: Query = " << strQuery.c_str();
		return;
	}

	//unsigned int num_fields = mysql_num_fields(result);
	MYSQL_FIELD *pSQLField = NULL;
	string strFields = "thread " + to_string(id);
	strFields += ": ";
	while (NULL != (pSQLField = mysql_fetch_field(result))) {
		strFields += pSQLField->name;
		strFields += "\t";
	}
	cout << strFields.c_str() << endl;

	MYSQL_ROW pSQLRow = NULL;
	string strRow = "thread " + to_string(id);
	strRow += ": ";
	int numFields = mysql_num_fields(result);
	while (pSQLRow = mysql_fetch_row(result)) {
		for (int i = 0; i < numFields; i++) {
			string strFieldValue = pSQLRow[i];
			strRow += strFieldValue;
			strRow += "\t";
		}
		cout << strRow.c_str() << "\t" << endl;
	}

	mysql_free_result(result);
	connPool.deposit(mysql);
}

int main(int argc, char* argv[]) {
	CConnPool connPool(16);
	int thread_num;
	if (argc == 2) {
		thread_num = atoi( argv[1] );
	}
	else {
		thread_num = THREAD_NUM;
	}

	mysql_library_init(0, NULL, NULL);
	vector<thread> threads;
	for (int i = 0; i < thread_num; i++) {
		thread th(CConnPool::execute, ref(connPool), i, "show tables" );
		//thread th(execute, ref(connPool), i, "show tables");
		threads.push_back( move(th) );
	}

	for (int i = 0; i < thread_num; i++) {
		threads[i].join();
	}

	system("pause");
	return 0;
}



