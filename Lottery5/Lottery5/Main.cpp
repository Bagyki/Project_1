#include <iostream>

#include <vector>

#include "Lottery.h"
#include "LotteryFive.h"


using namespace std;



int main()
{
	srand(time(NULL));

	Lottery lottery;
	LotteryFive machineDraws;
	vector<LotteryFive> lf;

	int numberOfRandomTips = 100;


	for (int i = 0; i < numberOfRandomTips; i++)
	{
		LotteryFive randomTips;
		randomTips.fiveDraws();
		lf.push_back(randomTips);
	}

	machineDraws.fiveDraws();


	for (int i = 0; i < numberOfRandomTips; i++)
	{
		lottery.countHits(lottery.checkResultOfDraws(lf[i].getDraws(), machineDraws.getDraws()));
	}


	cout << "A(z) 2 talalatosok szama: " << Lottery::twoHits << endl;
	cout << "A(z) 3 talalatosok szama: " << Lottery::threeHits << endl;
	cout << "A(z) 4 talalatosok szama: " << Lottery::fourHits << endl;
	cout << "A(z) 5 talalatosok szama: " << Lottery::fiveHits << endl;


};
