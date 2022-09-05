#ifndef LOTTERY_H
#define LOTTERY_H

#include <vector>


using namespace std;



class Lottery
{
public:
	Lottery() {}
	~Lottery() {}

	const static int firstNum;
	const static int lastNum;
	const static int drawsNum;

	static int noHit;
	static int oneHit;
	static int twoHits;
	static int threeHits;
	static int fourHits;
	static int fiveHits;


	const vector<int> getDraws();

	int randomDraw();

	bool checkIfSameDraw(int draw);

	void fiveDraws();

	int checkResultOfDraws(const vector<int> &randomTips, const vector<int> &machineDraw);

	void countHits(int i);



private:
	vector<int> m_Draws;

};



#endif