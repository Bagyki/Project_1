#ifndef TRUCK_H
#define TRUCK_H

#include "Load.h"
#include <vector>
#include <string>

using namespace std;


class Truck
{
public:
	Truck(){}
	~Truck(){}

	//void setTruck(double maxWeight);
	//double getTruck() const;
	
	
	
	
	static double getMaxWeight();

	double getLoads();  //const
	
	bool addLoadToTruck(const Load &load);

	bool checkLoad(const Load &load);

	string showTruck();


private:
	vector<Load> m_Loads;
	static const double maxWeight;
};







#endif

