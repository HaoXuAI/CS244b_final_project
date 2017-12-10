#pragma once
#include <deque>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <assert.h>
#include "mysql.h"

using namespace std;

struct ConnArgs {
	ConnArgs(const string strHost, const int nPort, const string strName, const string strUsr, const string strPass) :
		dbHost(strHost), nPort(nPort), dbName(strName), dbUsr(strUsr), dbPass(strPass) {}

	const string dbHost;
	const int nPort;
	const string dbName;
	const string dbUsr;
	const string dbPass;
};

class CConnPool
{
public:
	CConnPool(int capacity) : m_iCapacity(capacity), m_iSize(0){ }
	//~CConnPool();

	void deposit(void* conn) {
		unique_lock<mutex> lk(m_mtLock);
		assert( m_dqPool.size() < m_iCapacity );
#if 0
		while (m_dqPool.size() == m_iCapacity) {
			m_cvNotFull.wait(lk);
		}
#endif
		m_dqPool.push_back(conn);
		lk.unlock();
		m_cvNotEmpty.notify_one();
	}

	void* fetch() {
		unique_lock<mutex> lk(m_mtLock);
		while (m_dqPool.empty()) {
			m_cvNotEmpty.wait(lk);
		}

		void* conn = m_dqPool.front();
		m_dqPool.pop_front();
		lk.unlock();
		//m_cvNotFull.notify_one();
		return conn;
	}

	bool isFull() { return m_iSize >= m_iCapacity; }
	inline int getSize() { return m_iSize; }
	void incSize() {
		unique_lock<mutex> lk(m_mtLock);
		++m_iSize;
	}

	static void* connect(const struct ConnArgs* connArgs);
	static void execute( CConnPool& connPool, int id, const string strQuery);
private:
	deque<void *> m_dqPool;
	//vector<void *> m_vecConns;
	int m_iCapacity;
	int m_iSize;
	mutex m_mtLock;
	//condition_variable m_cvNotFull;
	condition_variable m_cvNotEmpty;
};

