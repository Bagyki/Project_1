#ifndef CELL_CPP
#define CELL_CPP



/*
enum Condition
{
	X,
	O,
	R,
};

/*
enum Condition2
{
	notLawned,
	lawned,
	robot,
};
*/

class Cell
{
public:
	Cell() 
	{
		m_RowNo = 0;
		m_ColNo = 0;
		m_Condition = 'X';
	}
	~Cell()
	{}

	void setRow(int row);
	void setCol(int col);
	void setCondition(char a);
	char getCondition();


private:
	int m_RowNo;
	int m_ColNo;
	char m_Condition;

};

#endif
