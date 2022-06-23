#ifndef CELL_H
#define CELL_H


enum Condition
{
	notLawned,
	lawned,
	robot,
	stone,
};


class Cell
{
public:
	Cell() 
	{
		m_Condition = Condition::notLawned;
	}
	~Cell()
	{}
	
	void setCondition(Condition condition);
	
	Condition getCondition();


private:
	
	Condition m_Condition;

};

#endif
