#include "DataAccess.h"
#include <iostream>
#include "stdlib.h"

using namespace std;

//1) mysql_init is not thread safe (the first time to call it), need add lock in mt for it


std::mutex CDataAccess::m_mGuard;

CDataAccess::CDataAccess() 
	: m_pSQL(NULL),
	  m_pSQLResultSet(NULL),
	  m_bIsConnect(false)
{
}


CDataAccess::~CDataAccess()
{
	if (m_pSQL) {
		mysql_close(m_pSQL);
	}
	m_pSQL = NULL;
	m_pSQLResultSet = NULL;

	//mysql_library_end();
}

//every thread call it firstly
bool CDataAccess::ConnectDB(const std::string &strHost, const int nPort, const std::string &strDBName, const std::string& strUserName, const std::string &strPassword)
{
	if (m_bIsConnect) {
		cout << "DB has already been connected!\n";
		return true;
	}

	std::unique_lock<std::mutex> lck(m_mGuard);

	mysql_library_init(0, NULL, NULL);
	if ((m_pSQL = mysql_init(NULL)) == NULL) {
		cout << "initialize MySql connection failed!\n";
		return false;
	}

	if (NULL == mysql_real_connect(m_pSQL, strHost.c_str(), strUserName.c_str(), strPassword.c_str(), strDBName.c_str(), nPort, NULL, 0)) {
		cout << "connection with MySql failed:" << mysql_error(m_pSQL) << endl;
		mysql_close(m_pSQL);
		mysql_library_end();
		return false;
	}

	m_bIsConnect = true;
	return m_bIsConnect;
}

//every thread may call it multiple times
bool CDataAccess::ExecuteQuery(string &strSQL)
{
	if (!m_bIsConnect) {
		cout << "Wrong, not connected to MySql!\n";
		return false;
	}
	size_t nReturnValue = mysql_real_query(m_pSQL, strSQL.c_str(), strSQL.length());
	m_pSQLResultSet = mysql_store_result(m_pSQL);
	if (nReturnValue == 0) {
		return true;
	} else {
		cout << "error code: " << nReturnValue << endl;
		return false;
	}
}


/*int main()
{
	CDataAccess dataAccess;
	bool isConnect = dataAccess.ConnectDB("localhost", 3306, "bank_new", "root", "");
	if (isConnect) {
		cout << "db connected." << endl;
		string strQuery = "select * from customer_tb";
		//deposit $100
		//string strQuery = "update account set balance=balance-100 where CUSTOMER_NAME="Robert Dean"";
		bool isSuccess = dataAccess.ExecuteQuery(strQuery);
		if (isSuccess) {
			MYSQL_RES* sqlResult = dataAccess.getSqlResult();

			//output the table field
			MYSQL_FIELD *pSQLField = NULL;
			while (NULL != (pSQLField = mysql_fetch_field(sqlResult))) {
				cout << pSQLField->name << "\t";
			}
			cout << endl;

			//output each row of the table
			MYSQL_ROW pSQLRow = NULL;
			while (pSQLRow = mysql_fetch_row(sqlResult)) {
				//loop to read each line
				int numCol = mysql_num_fields(sqlResult);
				for (int i = 0; i < numCol; i++) {
					string strFieldValue = pSQLRow[i] ? pSQLRow[i] : "NULL";
					if ( i == 1){
					    unsigned int lenS = 15 - strFieldValue.size();
					    while(lenS-- > 0) strFieldValue += " ";
					}
					cout << strFieldValue.c_str() << "\t\t";
				}
				cout << endl;
			}

			dataAccess.releaseResult();
		}
	} else {
		cout << "failed to connect to db." << endl;
	}

	return 0;
}*/
