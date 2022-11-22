#ifndef FULLADDRESS_H
#define FULLADDRESS_H

#include "Address.h"

#include <string>





class FullAddress : public Address
{
public:
	FullAddress()
	{
		m_District = 0;
		m_PublicSpace = "";
		m_HouseNumber = 0;	
		m_Building = "";
		m_Stairway = "";
		m_Floor = 0;
		m_Door = 0;
	}
	~FullAddress()
	{
	}


private:
	int m_District;			//string?
	string m_PublicSpace;
	int m_HouseNumber;		//string?
	string m_Building;
	string m_Stairway;
	int m_Floor;			//string?
	int m_Door;				//string?

};


#endif