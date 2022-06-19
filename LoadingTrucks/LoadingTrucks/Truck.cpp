#include <iostream>
#include "Truck.h"
#include "Load.h"
#include <vector>

/*
void Truck::setTruck(double maxWeight)
{
	m_MaxWeight = maxWeight;
}
double Truck::getTruck() const
{
	return m_MaxWeight;
}
*/

const double Truck::maxWeight = 20;


double Truck::getMaxWeight()
{
	return maxWeight;
}

double Truck::getLoads()
{
	double loadedWeight = 0;
	for (int i = 0; i < m_Loads.size(); i++)
	{
		
		loadedWeight = loadedWeight + m_Loads[i].getLoad();
	}
	return loadedWeight;
}

bool Truck::addLoadToTruck(const Load &load)
{
	bool accepted = checkLoad(load);
	if (accepted == true)                         // if (accepted)  - elég!
	{
		m_Loads.push_back(load);
	}
	return accepted;
}


bool Truck::checkLoad(const Load &load)
{	
	//if ((load.getLoad() + getLoads()) <= getMaxWeight())
	if ((load.getLoad() + getLoads()) <= maxWeight)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string Truck::showTruck()
{	
	string truck;
	for (int i = 0; i < m_Loads.size(); i++)
	{
		truck = truck + to_string(m_Loads[i].getLoad()) + ", ";
	}
	return truck;
}
