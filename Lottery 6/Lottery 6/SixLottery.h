#ifndef SIXLOTTERY_CPP
#define SIXLOTTERY_CPP


#include <vector>

using namespace std;


class SixLottery
{
public:
	SixLottery() {};
	~SixLottery() {};
	
	const static int firstNumber;
	const static int lastNumber;
	const static int lotteryNumber;
	
	void createAndFillSixLotteryNumbers();
	//////////
	//	Create and fill a SixLottery object with the playable numbers
	//////////
	//	nothing to return
	//////////

	
private:
	vector<int> m_Numbers;

};






#endif