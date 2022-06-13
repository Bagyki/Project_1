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
	
	
	static double maxWeight;
	
	static double getMaxWeight();

	double getLoads();
	
	void addLoadToTruck(Load load);

	bool checkLoad(Load load);

	string showTruck();


private:
	vector<Load> m_Loads;
};







#endif

