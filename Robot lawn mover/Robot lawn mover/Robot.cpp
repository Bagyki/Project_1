#include "Robot.h"
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

using namespace std;


void Robot::setArea(Area* area)
{
	m_Area = area;
}

void Robot::setCurrentDirection(Direction direction)
{
	m_CurrentDirection = direction;
}

Direction Robot::getCurrentDirection()
{
	return m_CurrentDirection;
}

void Robot::move()
{
	int currentRow = m_Area->giveBackRowNoOfRobot();
	int currentCol = m_Area->giveBackColNoOfRobot();

	bool validCell = false;

	if (m_StepCounter > 15)									////// elrontani a 45°-os szimetriát
	{
		m_StepCounter = 0;
		setCurrentDirection(generateNewDirection());
	}

	do
	{
		int nextRow = -1;
		int nextCol = -1;

		if (getCurrentDirection() == Direction::up)
		{
			nextRow = currentRow - 1;
			nextCol = currentCol;
		}
		if (getCurrentDirection() == Direction::right)
		{
			nextRow = currentRow;
			nextCol = currentCol + 1;
		}
		if (getCurrentDirection() == Direction::down)
		{
			nextRow = currentRow + 1;
			nextCol = currentCol;
		}
		if (getCurrentDirection() == Direction::left)
		{
			nextRow = currentRow;
			nextCol = currentCol - 1;
		}
		if (getCurrentDirection() == Direction::upleft)
		{
			nextRow = currentRow - 1;
			nextCol = currentCol - 1;
		}
		if (getCurrentDirection() == Direction::upright)
		{
			nextRow = currentRow - 1;
			nextCol = currentCol + 1;
		}
		if (getCurrentDirection() == Direction::downleft)
		{
			nextRow = currentRow + 1;
			nextCol = currentCol - 1;
		}
		if (getCurrentDirection() == Direction::downright)
		{
			nextRow = currentRow + 1;
			nextCol = currentCol + 1;
		}

		validCell = m_Area->isValidCell(nextRow, nextCol);

		if (validCell == true)
		{
			m_Area->setRobotToPosition(nextRow, nextCol);
			m_StepCounter++;
		}
		else
		{
			setCurrentDirection(generateNewDirection());
		}
	} while (validCell == false);
}


Direction Robot::generateNewDirection()
{
	Direction direction = Direction::up;
	
	int random = rand() % 8;

	
	if (random == 0)
	{
		direction = Direction::up;
	}
	if (random == 1)
	{
		direction = Direction::right;
	}
	if (random == 2)
	{
		direction = Direction::down;
	}
	if (random == 3)
	{
		direction = Direction::left;
	}
	if (random == 4)
	{
		direction = Direction::upleft;
	}
	if (random == 5)
	{
		direction = Direction::upright;
	}
	if (random == 6)
	{
		direction = Direction::downleft;
	}
	if (random == 7)
	{
		direction = Direction::downright;
	}

	return direction;
}
