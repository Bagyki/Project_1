#include "Cell.h"



void Cell::setRow(int row)
{
	m_RowNo = row;
}

void Cell::setCol(int col)
{
	m_ColNo = col;
}

void Cell::setCondition(Condition condition)
{
	m_Condition = condition;
}

Condition Cell::getCondition()
{
	return m_Condition;
}