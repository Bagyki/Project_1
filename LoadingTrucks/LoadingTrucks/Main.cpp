#include <iostream>
#include <vector>
#include "Load.h"
#include "Truck.h"


using namespace std;


bool askForNewLoad();
Load addNewLoad();

void addNewTruck(vector<Truck> &trucks);

void insertEmptyLine();

void checkLoadInAllTrucks(const Load& load, vector<Truck>& trucks);
void checkLoadInAllTrucks2(const Load& load, vector<Truck>& trucks);

int main()
{
	/// COMMENT/////
	// Nem kell egy truck-ot alapból beletenni a vektorba. Mi van ha nincs egy rakomány sem. Akkor hány truck kell?
	////////////////
	vector<Truck> trucks;
	vector<Load> allLoads;

	cout << "Udvozlunk! Rakodjunk!" << endl;

	insertEmptyLine();

	bool ask = true;							// fillload list
	do
	{
		ask = askForNewLoad();
		if (ask == true)
		{
			allLoads.push_back(addNewLoad());   // ha addNewLoad akkor rakja is bele, vagy csak create
		}

	} while (ask == true);


	for (int i = 0; i < allLoads.size(); i++)		//listload list
	{
		cout << allLoads[i].getLoad() << endl;
	}


	insertEmptyLine();

	
	for (int i = 0; i < allLoads.size(); i++)		////
	{
		checkLoadInAllTrucks2(allLoads[i], trucks);
	}
	

	


	insertEmptyLine();

	for (int t = 0; t < trucks.size(); t++)				/////
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
	
	double weight = 0;
	do
	{
		cout << "Add meg a rakomany sulyat tonnaban!" << endl;
		cin >> weight;
		if (weight > 20)
		{
			cout << "Tulsulyos, nem felrakodhato!" << endl;
		}
		if (weight <= 0)
		{
			cout << "Helyes sulyt adj meg, negativ nem lehet!" << endl;
		}
	} 
	while (weight > 20 || weight <= 0);
	
	/// COMMENT/////
	// Ezek az ellenőrzések feleslegesek, hiszen a ciklus csak akkor lép ki, ha megfelelő a súly.
	////////////////
	Load load(weight);

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
		/// COMMENT/////
	    // Ez így nem igazán jó. Gondolj a lépésekre amiket megbeszéltünk:
        // 1. Megvizsgáljuk, hogy van-e t-edik truck. Ha nincs létrehozunk egyet.
		// 2. Megkérdezzük, hogy a t-edik truck elfogadja-e a rakományt. 
		//    Ha igen: odaadjuk és jöhet a következő rakomány.
		//    Ha nem:  Lépünk a következő truck-hoz (t = t+1) és visszatérünk az 1. lépéshez.
	    ////////////////
		check = trucks[t].checkLoad(load);
		if (check == true)
		{
			trucks[t].addLoadToTruck(load);
		}
		else
		{
			if (t == trucks.size() - 1)
			{
				/// COMMENT/////
				// Ha az utolsó truck nem fogadta el az árut, tényleg kell egy új truck (eddig jó)
				// De a t-t is növelni kell, hogy a következő körben az "új" truck-tól kérdezzen.
				////////////////
				addNewTruck(trucks);
			}
			t++;
		}	
	} while (check == false);
}


void checkLoadInAllTrucks2(const Load& load, vector<Truck>& trucks)
{
	bool accepted = false;
	int t = 0;
	do
	{
		if (t == trucks.size())
		{
			addNewTruck(trucks);
		}
		
		accepted = trucks[t].addLoadToTruck(load);

		if (accepted == false)
		{
			t++;
		}
		// itt elég lenne csak a t++;  !!!!
		
	} while (accepted == false);

}