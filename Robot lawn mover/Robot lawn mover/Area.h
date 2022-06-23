#ifndef AREA_H
#define AREA_H

#include "Cell.h"


class Area
{
public:
	Area() 
	{
		m_RowNo = 20;
		m_ColNo = 51;
	}
	~Area() {}


	void printOutArea();

	void createAndFillArea();

	Condition giveBackCondition(int row, int col);

	void setRobotStartPosition(int row, int col);

	int giveBackRowNoOfRobot();

	int giveBackColNoOfRobot();

	void setRobotToPosition(int row, int col);

	bool isValidCell(int row, int col);


private:
	
	void changeCellCondition(int row, int col, Condition condition);

	int m_RowNo;

	int m_ColNo;

	Cell m_Area[100][100];

};


#endif 