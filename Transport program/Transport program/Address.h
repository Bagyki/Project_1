#ifndef ADDRESS_H
#define ADDRESS_H

#include "CountryAndCity.cpp"

#include <string>



class Address
{
public:
	Address()
	{
		m_CompanyName = "";
		m_StreetName = "";
		m_Country = Country::Please_Select;    ///   !!!!!!!!!!!!!!!!!!!!!!!!!   enum class, nem enum -> CountryAndCity.cpp
		m_City = 0;
		m_Comment = "";
	}
	~Address()
	{
	}

private:
	string m_CompanyName;
	string m_StreetName;
	Country m_Country;		
	City* m_City;

	string m_Comment;
};

#endif