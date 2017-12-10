#pragma once

//#include "stdafx.h"
#include <string>
#include <winsock.h>
#include "mysql.h"
#include <thread>
#include <mutex>

class CDataAccess
{
public:
	CDataAccess();
	~CDataAccess();

	inline MYSQL_RES* getSqlResult() { return m_pSQLResultSet; }
	inline void releaseResult() { mysql_free_result(m_pSQLResultSet); }

	//static void endLibrary();
private:
	MYSQL* 	m_pSQL;
	MYSQL_RES* m_pSQLResultSet;
	static std::mutex m_mGuard;

protected:
	BOOL m_bIsConnect;
public:
	BOOL ConnectDB(const std::string &strHost, const int nPort, const std::string &strDBName, const std::string& strUserName, const std::string &strPassword);
	BOOL ExecuteQuery( std::string &strSQL );
};

