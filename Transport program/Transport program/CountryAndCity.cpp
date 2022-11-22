#ifndef COUNTRYANDCITY_CPP
#define COUNTRYANDCITY_CPP

#include <string>
#include <vector>

using namespace std;

enum class Country
{
	Please_Select,
	Hungary,
	Italy,
	Germany,
	Austria,
	Slovakia,
	Czech_Republic,
	Romania,
	France,
	Spain,
	Belgium,
	The_Netherlands,
};


struct City
{
	string sCityName;
	string sPostalCode;

};

vector<City*> Cities;





#endif