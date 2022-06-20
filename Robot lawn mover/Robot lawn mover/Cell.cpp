#include "Cell.h"



void Cell::setRow(int row)
{
	m_RowNo = row;
}

void Cell::setCol(int col)
{
	m_ColNo = col;
}

void Cell::setCondition(char A)
{
	m_Condition = A;
}

char Cell::getCondition()
{
	return m_Condition;
}