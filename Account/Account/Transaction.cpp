#include "Transaction.h"





void Transaction::setTransactionName(string name)
{
	m_TransactionName = name;
}

string Transaction::getTransactionName() const
{
	return m_TransactionName;
}

void Transaction::setTransactionAmount(int amount)
{
	m_TransactionAmount = amount;
}

int Transaction::getTransactionAmount() const
{
	return m_TransactionAmount;
}