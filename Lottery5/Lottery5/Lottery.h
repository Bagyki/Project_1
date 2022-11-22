#ifndef LOTTERY_H
#define LOTTERY_H

#include <vector>


using namespace std;



class Lottery
{
public:
	Lottery()
	{
		m_FirstNum = 0;
		m_LastNum = 0;
		m_DrawsNum = 0;
	}
	~Lottery() {}

	int getDrawsNumber() const;

	const vector<int>& getDraws() const;

	int randomDraw() const;

	bool checkIfSameDraw(int draw) const;

	void Draws();

	int checkResultOfDraw(const vector<int>& machineDraw) const;

protected:
	int m_FirstNum;
	int m_LastNum;
	int m_DrawsNum;

private:
	vector<int> m_Draws;

};


#endif