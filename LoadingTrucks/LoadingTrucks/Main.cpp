#include <iostream>
//#include <string>
#include <vector>
#include "Load.h"
#include "Truck.h"


using namespace std;


bool askForNewLoad();
Load addNewLoad();

void addNewTruck(vector<Truck> &trucks);

void insertEmptyLine();

void checkLoadInAllTrucks(const Load& load, vector<Truck>& trucks);

int main()
{
	Truck truck;
	vector<Truck> trucks;
	trucks.push_back(truck);
	vector<Load> allLoads;

	cout << "Udvozlunk! Rakodjunk!" << endl;

	insertEmptyLine();

	bool ask = true;
	do
	{
		ask = askForNewLoad();
		if (ask == true)
		{
			allLoads.push_back(addNewLoad());
		}

	} while (ask == true);


	for (int i = 0; i < allLoads.size(); i++)
	{
		cout << allLoads[i].getLoad() << endl;
	}


	insertEmptyLine();

	
	for (int i = 0; i < allLoads.size(); i++)
	{
		checkLoadInAllTrucks(allLoads[i], trucks);
	}
	

	


	insertEmptyLine();

	for (int t = 0; t < trucks.size(); t++)
	{
		cout << t + 1 << ". kamion rakomanya: " << trucks[t].showTruck() << endl;
	}
	

};


bool askForNewLoad()
{
	string answer;
	const string question = "Szeretnel uj rakomanyt hozzaadni? i/n";
	do
	{
		cout << question << endl;
		cin >> answer;
	} 
	while (answer != "i" && answer != "n");

	if (answer == "i")
	{
		return true;
	}
	if (answer == "n")
	{
		return false;
	}
	//return answer == "i";
}


Load addNewLoad()
{
	Load load;
	double weight = 0;
	do
	{
		cout << "Add meg a rakomany sulyat tonnaban!" << endl;
		cin >> weight;
	} 
	while (weight > 20 && weight < 0);
	
	if (weight > 20)
	{
		cout << "Tulsulyos, nem felrakodhato!" << endl;
	}
	if (weight <= 0)
	{
		cout << "Helyes sulyt adj meg, negativ nem lehet!" << endl;
	}
	if (weight <= 20 && weight > 0)
	{
		load.setLoad(weight);	
	}
	return load;
}


void addNewTruck(vector<Truck> &trucks)
{
	Truck truck;
	trucks.push_back(truck);
}


void insertEmptyLine()
{
	cout << endl;
}


void checkLoadInAllTrucks(const Load &load, vector<Truck>& trucks)
{
	bool check = false;
	int t = 0;
	do
	{
		check = trucks[t].checkLoad(load);
		if (check == true)
		{
			trucks[t].addLoadToTruck(load);
		}
		else
		{
			if (t == trucks.size() - 1)
			{
				addNewTruck(trucks);
			}
			else
			{
				t++;
			}
		}	
	} while (check == false);
}

