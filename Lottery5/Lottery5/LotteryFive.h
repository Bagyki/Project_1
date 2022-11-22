#ifndef LOTTERYFIVE_H
#define LOTTERYFIVE_H

#include "Lottery.h"

#include <vector>


using namespace std;


class LotteryFive : public Lottery
{
public:
	LotteryFive() 
	{
		m_FirstNum = 1;
		m_LastNum = 90;
		m_DrawsNum = 5;
	}
	~LotteryFive() {}



	

private:
	

};




#endif