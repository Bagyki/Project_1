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

double Truck::maxWeight = 20;


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

void Truck::addLoadToTruck(Load load)
{
	m_Loads.push_back(load);
}

bool Truck::checkLoad(Load load)
{	
	if ((load.getLoad() + getLoads()) <= getMaxWeight())
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
		truck = truck + ", " + to_string(m_Loads[i].getLoad());
		//cout << m_Loads[i].getLoad() << endl;
	}
	return truck;
}
