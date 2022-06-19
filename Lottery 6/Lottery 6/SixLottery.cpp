#include "SixLottery.h"



const int SixLottery::firstNumber = 1;
const int SixLottery::lastNumber = 45;
const int SixLottery::lotteryNumber = 6;


void SixLottery::createAndFillSixLotteryNumbers()
{
	for (int i = firstNumber - 1; i <= lastNumber; i++)
	{
		m_Numbers.push_back(i);
	}
}

