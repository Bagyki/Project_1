#include <iostream>
#include <ostream>

#include "Cell.h"

using namespace std;



void createAndFillArea(char area[][20]);
void printOutArea(char area[][20]);

void createAndFillArea2(Cell area[][20]);
void printOutArea2(Cell area[][20]);


int main()
{
	Cell cell;
	
	//char area[20][20] = { };
	//createAndFillArea(area);
	//printOutArea(area);
	
	Cell area2[20][20] = { };
	createAndFillArea2(area2);
	area2[19][5].setCondition('R');
	printOutArea2(area2);





};


void createAndFillArea(char area[][20])
{
	char a = 'X';
	for (int i = 0; i < 20; i++)
	{
		for (int k = 0; k < 20; k++)
		{
			area[i][k] = a;
		}
	}
}

void printOutArea(char area[][20])
{
	for (int i = 0; i < 20; i++, cout << "\n")
	{
		for (int k = 0; k < 20; k++)
		{
			cout << area[i][k];
		}
	}
}




void printOutArea2(Cell area[][20])
{
	for (int row = 0; row < 20; row++, cout << "\n")
	{
		for (int col = 0; col < 20; col++)
		{
			cout << area[row][col].getCondition();
		}
	}
}

void createAndFillArea2(Cell area[][20])
{
	for (int row = 0; row < 20; row++)
	{
		for (int col = 0; col < 20; col++)
		{
			Cell cell;
			cell.setRow(row);
			cell.setCol(col);
			cell.setCondition('X');
			cell = area[row][col];
		}
	}
}