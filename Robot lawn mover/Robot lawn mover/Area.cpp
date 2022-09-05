#include "Area.h"
#include <iostream>

using namespace std;


void Area::printOutArea()
{
	for (int row = 0; row < m_RowNo; row++, cout << "\n")
	{
		for (int col = 0; col < m_ColNo; col++)
		{
			if (m_Area[row][col].getCondition() == Condition::notLawned)
			{
				cout << 'w';
			}
			if (m_Area[row][col].getCondition() == Condition::lawned)
			{
				cout << '.';
			}
			if (m_Area[row][col].getCondition() == Condition::robot)
			{
				cout << 'O';
			}
		}
	}
}

void Area::createAndFillArea()
{
	for (int row = 0; row < m_RowNo; row++)
	{
		for (int col = 0; col < m_ColNo; col++)
		{
			Cell cell;
			cell.setCondition(notLawned);
			m_Area[row][col] = cell;
		}
	}
}

void Area::changeCellCondition(int row, int col, Condition condition)
{
	m_Area[row][col].setCondition(condition);
}

void Area::setRobotStartPosition(int row, int col)
{
	m_Area[row][col].setCondition(Condition::robot);
}

int Area::giveBackRowNoOfRobot()
{
	int result = -1;
	for (int row = 0; row < m_RowNo; row++)
	{
		for (int col = 0; col < m_ColNo; col++)
		{
			if (m_Area[row][col].getCondition() == Condition::robot)
			{
				result = row;
			}
		}
	}
	return result;
}

int Area::giveBackColNoOfRobot()
{
	int result = -1;
	for (int row = 0; row < m_RowNo; row++)
	{
		for (int col = 0; col < m_ColNo; col++)
		{
			if (m_Area[row][col].getCondition() == Condition::robot)
			{
				result = col;
			}
		}
	}
	return result;
}

void Area::setRobotToPosition(int row, int col)
{
	changeCellCondition(giveBackRowNoOfRobot(), giveBackColNoOfRobot(), Condition::lawned);
	changeCellCondition(row, col, Condition::robot);
}

bool Area::isValidCell(int row, int col)
{
	bool valid = false;
	if (row >= 0 && row < m_RowNo)     
	{
		if (col >= 0 && col < m_ColNo)
		{
			valid = true;
		}
	}
	if (m_Area[row][col].getCondition() == Condition::stone)		//// for later
	{
		valid = false;
	}
	
	return valid;
}