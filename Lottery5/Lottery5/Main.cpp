#include <iostream>

#include <vector>

#include "Lottery.h"
#include "LotteryFive.h"


using namespace std;



int main()
{
	srand(time(NULL));

	LotteryFive machineDraws;
	vector<LotteryFive> lf;

	int numberOfRandomTips = 100;


	for (int i = 0; i < numberOfRandomTips; i++)
	{
		LotteryFive randomTips;
		randomTips.Draws();
		lf.push_back(randomTips);
	}

	machineDraws.Draws();

	int draws = machineDraws.getDrawsNumber();

	vector<int> hitsVector(draws+1, 0);



	for (int i = 0; i < numberOfRandomTips; i++)
	{
		int hits = 0;

		hits = lf[i].checkResultOfDraw(machineDraws.getDraws());

		hitsVector[hits]++;

	}

	for (int i = 0; i < hitsVector.size(); i++)
	{
		cout << "A(z) " << i << " talalatosok szama: " << hitsVector[i] << endl;
	}


};

