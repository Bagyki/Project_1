#ifndef COMPANY_H
#define COMPNAY_H

#include "FullAddress.h"


class Company
{
public:
	Company()
	{
		m_SiteAddress = 0;
		m_InvoiceAddress = 0;
		m_PostAddress = 0;
		m_VatNumber = "";
		m_BankAccount = "";
		m_ContactPerson = "";
		m_PaymentDeadline = 0;
		m_EmailAddress = "";
		m_PhoneNumber = "";
	}
	~Company()
	{
	}


private:
	FullAddress* m_SiteAddress;
	FullAddress* m_InvoiceAddress;
	FullAddress* m_PostAddress;
	string m_VatNumber;
	string m_BankAccount;
	string m_ContactPerson;
	int m_PaymentDeadline;
	string m_EmailAddress;
	string m_PhoneNumber;
};

#endif