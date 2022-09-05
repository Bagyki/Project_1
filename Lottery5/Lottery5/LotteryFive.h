#ifndef LOTTERYFIVE_H
#define LOTTERYFIVE_H

#include "Lottery.h"

#include <vector>


using namespace std;


class LotteryFive : public Lottery
{
public:
	LotteryFive() {}
	~LotteryFive() {}

	

private:
	vector<int> m_Draws;
};




#endif