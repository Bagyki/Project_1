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
		m_RowNo = 0;
		m_ColNo = 0;
		m_Condition = Condition::notLawned;
	}
	~Cell()
	{}

	void setRow(int row);
	
	void setCol(int col);
	
	void setCondition(Condition condition);
	
	Condition getCondition();


private:
	int m_RowNo;
	int m_ColNo;
	Condition m_Condition;

};

#endif
