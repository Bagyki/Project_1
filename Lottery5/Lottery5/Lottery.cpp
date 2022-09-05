#include "Lottery.h"

#include <stdio.h>    
#include <stdlib.h>     
#include <time.h>  



const vector<int> Lottery::getDraws()
{
	return m_Draws;
}


int Lottery::randomDraw()
{
	int x = rand() % Lottery::lastNum + 1;
	return x;
}

bool Lottery::checkIfSameDraw(int draw)
{
	bool check = true;
	for (int i = 0; i < m_Draws.size(); i++)
	{
		if (draw == m_Draws[i])
		{
			check = false;
		}
	}
	return check;
}

void Lottery::fiveDraws()
{
	for (int i = 0; i < Lottery::drawsNum; i++)
	{
		int x = 0;
		do
		{
			x = randomDraw();
			checkIfSameDraw(x);
		} while (checkIfSameDraw(x) == false);
		m_Draws.push_back(x);
	}
}

int Lottery::checkResultOfDraws(const vector<int> &randomTips, const vector<int> &machineDraw)
{
	int i = 0;
	for (int t = 0; t < randomTips.size(); t++)
	{
		for (int m = 0; m < machineDraw.size(); m++)
		{
			if (randomTips[t] == machineDraw[m])
			{
				i++;
			}
		}
	}
	return i;
}

void Lottery::countHits(int i)
{
	if (i == 0)
	{
		Lottery::noHit++;
	}
	if (i == 1)
	{
		Lottery::oneHit++;
	}
	if (i == 2)
	{
		Lottery::twoHits++;
	}
	if (i == 3)
	{
		Lottery::threeHits++;
	}
	if (i == 4)
	{
		Lottery::fourHits++;
	}
	if (i == 5)
	{
		Lottery::fiveHits++;
	}
}