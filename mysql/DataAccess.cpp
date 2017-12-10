#include "DataAccess.h"
#include <iostream>
#include "stdlib.h"

using namespace std;

//1) mysql_init is not thread safe (the first time to call it), need add lock in mt for it


std::mutex CDataAccess::m_mGuard;

CDataAccess::CDataAccess() 
	: m_pSQL(NULL),
	  m_pSQLResultSet(NULL),
	  m_bIsConnect(FALSE)
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
BOOL CDataAccess::ConnectDB(const std::string &strHost, const int nPort, const std::string &strDBName, const std::string& strUserName, const std::string &strPassword)
{
	if (m_bIsConnect) {
		cout << "DB has already been connected!\n";
		return TRUE;
	}

	std::unique_lock<std::mutex> lck(m_mGuard);

	mysql_library_init(0, NULL, NULL);
	if ((m_pSQL = mysql_init(NULL)) == NULL) {
		cout << "initialize MySql connection failed!\n";
		return FALSE;
	}

	if (NULL == mysql_real_connect(m_pSQL, strHost.c_str(), strUserName.c_str(), strPassword.c_str(), strDBName.c_str(), nPort, NULL, 0)) {
		cout << "connection with MySql failed:" << mysql_error(m_pSQL) << endl;
		mysql_close(m_pSQL);
		mysql_library_end();
		return FALSE;
	}

	m_bIsConnect = TRUE;
	return m_bIsConnect;
}

//every thread may call it multiple times
BOOL CDataAccess::ExecuteQuery(string &strSQL)
{
	if (!m_bIsConnect) {
		cout << "Wrong, not connected to MySql!\n";
		return FALSE;
	}
	size_t nReturnValue = mysql_real_query(m_pSQL, strSQL.c_str(), strSQL.length());
	m_pSQLResultSet = mysql_store_result(m_pSQL);
	return (0 == nReturnValue) ? TRUE : FALSE;
}


int main()
{
	CDataAccess dataAccess;
	BOOL isConnect = dataAccess.ConnectDB("127.0.0.1", 3306, "world", "root", "root");
	if (isConnect) {
		string strQuery = "select * from city";
		BOOL isSuccess = dataAccess.ExecuteQuery(strQuery);
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
					string strFieldValue = pSQLRow[i];
					cout << strFieldValue.c_str() << "\t";
				}
				cout << endl;
			}

			dataAccess.releaseResult();
		}
	}

	return 0;
}
