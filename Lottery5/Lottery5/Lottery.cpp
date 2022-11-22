#include "Lottery.h"

#include <stdio.h>    
#include <stdlib.h>     
#include <time.h>  


int Lottery::getDrawsNumber() const
{
	return m_DrawsNum;
}


const vector<int>& Lottery::getDraws() const
{
	return m_Draws;
}


int Lottery::randomDraw() const
{
	int x = rand() % m_LastNum + m_FirstNum;
	return x;
}

bool Lottery::checkIfSameDraw(int draw) const
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

void Lottery::Draws()
{
	for (int i = 0; i < m_DrawsNum; i++)
	{
		int x = 0;
		do
		{
			x = randomDraw();
		} while (checkIfSameDraw(x) == false);
		m_Draws.push_back(x);
	}
}

int Lottery::checkResultOfDraw(const vector<int>& machineDraw) const
{
	int i = 0;
	for (int t = 0; t < m_Draws.size(); t++)
	{
		for (int m = 0; m < machineDraw.size(); m++)
		{
			if (m_Draws[t] == machineDraw[m])
			{
				i++;
			}
		}
	}
	return i;
}

