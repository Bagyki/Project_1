#include <iostream>

#include "Transaction.h"
#include "Account.h"


using namespace std;






int main()
{
	Transaction transaction;
	Account account;

	for (int i = 0; i < 5; i++)
	{
		string name;
		int amount;
		cout << "Add meg a tranzakcio nevet!" << endl;
		cin >> name;
		cout << "Add meg a tranzakcio erteket!" << endl;
		cin >> amount;
		account.fillAndAddTransaction(transaction, name, amount);

	}

	account.listDeposits();
	account.listPayments();
	account.listTransactions();

	cout << account.giveBackAvarageDeposit() << endl;
	cout << account.giveBackAvaragePayment() << endl;
	cout << account.giveBackBalanceOfAccount() << endl;
	cout << account.giveBackLargestTransaction() << endl;
	cout << account.giveBackSmallestTransaction() << endl;







	/*
	string transactionName;
	cout << "Melyik tranzakciot keresi?" << endl;
	cin >> transactionName;
	*/

}