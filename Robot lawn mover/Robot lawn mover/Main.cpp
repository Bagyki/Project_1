#include <iostream>
#include <conio.h>

#include "Cell.h"
#include "Area.h"
#include "Robot.h"

using namespace std;


int main()
{
	srand(time(NULL));

	Area garden;
	Robot lawner;
	lawner.setArea(&garden);
	garden.createAndFillArea();

	garden.setRobotStartPosition(19, 5);
	garden.printOutArea();
	system("pause");
	

	do
	{
		lawner.move();
		system("cls");
		garden.printOutArea();
		system("pause");
	} while (true);



};
