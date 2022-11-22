#include "Account.h"

#include <iostream>

using namespace std;



void Account::fillAndAddTransaction(Transaction transaction, string name, int amount)
{
	transaction.setTransactionName(name);
	transaction.setTransactionAmount(amount);
	m_Account.push_back(transaction);
}


bool Account::checkIfThereIsAnyTransaction() const
{
	bool check = false;
	if (m_Account.size() > 0)
	{
		check = true;
	}
	return check;
}


void Account::checkTransaction(string transactionName) const
{
	int i = 0;
	
	while (i < m_Account.size() && transactionName != m_Account[i].getTransactionName())
	{
		i++;
	}
	if (i < m_Account.size())
	{
		cout << "A keresett tranzakcio erteke: " << m_Account[i].getTransactionAmount() << endl;
	}
	else
	{
		cout << "Nincs ilyen tranzakcio!" << endl;
	}
}


const Transaction* Account::getTransaction(string transactionName) const
{
	int i = 0;
	const Transaction* selectedTransaction = 0;

	while (i < m_Account.size() && transactionName != m_Account[i].getTransactionName())
	{
		i++;
	}
	if (i < m_Account.size())
	{
		selectedTransaction = &m_Account[i];
	}
	return selectedTransaction;
	
}


void Account::listTransactions() const
{
	for (int i = 0; i < m_Account.size(); i++)
	{
		cout << m_Account[i].getTransactionName() << " ," << m_Account[i].getTransactionAmount() << endl;
	}
}


void Account::listPayments() const
{
	for (int i = 0; i < m_Account.size(); i++)
	{
		if (m_Account[i].getTransactionAmount() < 0)
		{
			cout << m_Account[i].getTransactionName() << " ," << m_Account[i].getTransactionAmount() << endl;
		}
	}
}


void Account::listDeposits() const
{
	for (int i = 0; i < m_Account.size(); i++)
	{
		if (m_Account[i].getTransactionAmount() >= 0)
		{
			cout << m_Account[i].getTransactionName() << " ," << m_Account[i].getTransactionAmount() << endl;
		}
	}
}


int Account::giveBackBalanceOfAccount() const
{
	int balance = 0;
	for (int i = 0; i < m_Account.size(); i++)
	{
		balance = balance + m_Account[i].getTransactionAmount();
	}
	return balance;
}


double Account::giveBackAvaragePayment() const
{
	double payments = 0;
	int number = 0;
	double avg = 0;

	for (int i = 0; i < m_Account.size(); i++)
	{
		if (m_Account[i].getTransactionAmount() < 0)
		{
			payments = payments + m_Account[i].getTransactionAmount();
			number++;
		}
	}
	avg = payments / number;
	return avg;
}


double Account::giveBackAvarageDeposit() const
{
	double deposits = 0;
	int number = 0;
	double avg = 0;

	for (int i = 0; i < m_Account.size(); i++)
	{
		if (m_Account[i].getTransactionAmount() >= 0)
		{
			deposits = deposits + m_Account[i].getTransactionAmount();
			number++;
		}
	}
	avg = deposits / number;
	return avg;
}


int Account::giveBackLargestTransaction() const
{
	if (Account::checkIfThereIsAnyTransaction() == true)
	{
		int largestTransaction = 0;
		for (int i = 1; i < m_Account.size(); i++)
		{
			if (m_Account[i].getTransactionAmount() > m_Account[0].getTransactionAmount())
			{
				largestTransaction = i;
			}
		}
		return largestTransaction;
	}
	else
	{
		cout << "Nincs meg tranzakico!" << endl;
	}
}

enum Error
{
	OK = 0,
	NO_MEMORY = 1,
	FILE_ERROR = 2,
};

Error Account::saveToFile()






int Account::giveBackSmallestTransaction() const
{
	int smallestTransaction = 0;
	for (int i = 1; i < m_Account.size(); i++)
	{
		if (m_Account[i].getTransactionAmount() < m_Account[0].getTransactionAmount())
		{
			smallestTransaction = i;
		}
	}
	return smallestTransaction;
}