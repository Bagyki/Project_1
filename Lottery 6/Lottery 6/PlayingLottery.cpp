#include "PlayingLottery.h"
#include "SixLottery.h"

#include <iostream>
#include <stdio.h>      
#include <stdlib.h> 

using namespace std;


void PlayingLottery::askForAndSavePlayerTips(SixLottery sixLottery)
{
	int answer = 0;
	for (int i = 0; i < SixLottery::lotteryNumber; i++)
	{
		do
		{
			cout << "Add meg a tipped!" << endl;
			cin >> answer;
			if (checkForSameDraw(answer) == false)
			{
				cout << "Ezt mar tippelted!" << endl;
			}
			if (answer < SixLottery::firstNumber || answer > SixLottery::lastNumber)
			{ 
				cout << SixLottery::firstNumber << " es " << SixLottery::lastNumber << " kozotti szamot adj meg!" << endl;
			}
			

		} while (answer < SixLottery::firstNumber || answer > SixLottery::lastNumber || checkForSameDraw(answer) == false);

		m_Draws.push_back(answer);
		//sixLottery.erase(sixLottery.begin() + answer);
	}
	
}

void PlayingLottery::randomDrawsOfMachine(SixLottery sixLottery)
{
	for (int i = 0; i < SixLottery::lotteryNumber; i++)
	{
		int x = 0;
		do
		{
			x = randomDraw();
			checkForSameDraw(x);
		} while (checkForSameDraw(x) == false);
		m_Draws.push_back(x);
	}
}

int PlayingLottery::randomDraw()
{
	int x = rand() % SixLottery::lastNumber + 1;
	return x;
}

const int PlayingLottery::getDraw(int i)
{
	return m_Draws[i];
}

const vector<int> PlayingLottery::getDraws()
{
	return m_Draws;
}

bool PlayingLottery::checkForSameDraw(int draw)
{
	bool check = true;
	for (int n = 0; n < m_Draws.size(); n++)
	{
		if (draw == m_Draws[n])
		{
			check = false;
		}
	}
	return check;
}

