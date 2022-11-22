#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

using namespace std;


class Transaction
{
public:
	Transaction() 
	{
		m_TransactionName = "";
		m_TransactionAmount = 0;
		m_TransactionDate = "";
	};
	~Transaction() {};

	void setTransactionName(string name);
	string getTransactionName() const;

	void setTransactionAmount(int amount);
	int getTransactionAmount() const;


private:
	string m_TransactionName;
	int m_TransactionAmount;
	string m_TransactionDate;


};


#endif
