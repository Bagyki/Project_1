#ifndef ROBOT_H
#define ROBOT_H

#include "Area.h"


enum Direction
{
	up,
	right,
	down, 
	left,
	upleft,
	upright,
	downleft,
	downright,
};


class Robot
{
public:
	Robot() 
	{
		m_Area = 0;
		m_CurrentDirection = Direction::up;
		m_StepCounter = 0;
	}
	~Robot() {}

	void setArea(Area* area);

	void move();

	void setCurrentDirection(Direction direction);

	Direction getCurrentDirection();

	Direction generateNewDirection();


private:
	Area* m_Area;

	Direction m_CurrentDirection;

	int m_StepCounter;
};

#endif // !ROBOT_H