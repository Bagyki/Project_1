#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Transaction.h"
#include <vector>
#include <string>

using namespace std;


class Account
{
public:
	Account(){};
	~Account() {};

	void fillAndAddTransaction(Transaction transaction, string name, int amount);
	bool checkIfThereIsAnyTransaction() const;
	void checkTransaction(string transactionName) const;
	
	const Transaction* getTransaction(string transactionName) const;

	void listTransactions() const;
	void listPayments() const;
	void listDeposits() const;
	

	int giveBackBalanceOfAccount() const;
	double giveBackAvaragePayment() const;
	double giveBackAvarageDeposit() const;
	int giveBackLargestTransaction() const;
	int giveBackSmallestTransaction() const;






private:
	vector<Transaction> m_Account;
	


};


#endif

