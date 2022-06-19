#include <iostream>
#include <time.h>

#include "SixLottery.h"
#include "PlayingLottery.h"

using namespace std;


/////////////////////////////////////////
//	6 sz�m tippel�se
//	1-45-ig
//	6 sz�m sorsol�sa
//	nem lehet 2 azonos!!!!
//	a v�g�n �rja ki h�ny tal�lat van
////////////////////////////////////////
//	f�ggv�nyek le�r�sa:
//	- MIT csin�l, max 2 r�vid mondat
//	- visszaad-e eredm�nyt �s mit
////////////////////////////////////////


int checkResultOfTipsAndDraws(const vector<int> &player, const vector<int> &machine);
///////////////////
///	check the result of player's tips and machine's draws
/// give back a number which shows the match of tips and draws
//////////////////
///	return with an integer value
//////////////////

const void showResult(int i);
/////////////////
///	print out the number of result/hits using an integer value
/////////////////
///	nothing to return
/////////////////

void insertEmptyLine();
////////////////
///	just insert an empty line for better external
////////////////
///	nothing to return
////////////////



int main()
{
	srand(time(NULL));

	cout << "A tulzasba vitt szerencsejatek artalmas, szenvedelybetegseg kialakulasahoz vezethet!" << endl;
	insertEmptyLine();
	cout << "Udvozollek a 6-os lotto jatekon!" << endl;
	insertEmptyLine;

	SixLottery sixLottery;
	sixLottery.createAndFillSixLotteryNumbers();
	
	PlayingLottery player;
	player.askForAndSavePlayerTips(sixLottery);
	
	PlayingLottery machine;
	machine.randomDrawsOfMachine(sixLottery);
	


	insertEmptyLine();
	
	

	for (int i = 0; i < 6; i++)
	{
		cout << player.getDraw(i) << "  ";
	}

	insertEmptyLine();

	for (int i = 0; i < 6; i++)
	{
		cout << machine.getDraw(i) << "  ";
	}


	insertEmptyLine();


	showResult(checkResultOfTipsAndDraws(player.getDraws(), machine.getDraws()));


	//	tipp
	//	sorsol�s
	//	�rt�kel�s

};


int checkResultOfTipsAndDraws(const vector<int> &player, const vector<int> &machine)
{
	int i = 0;
	for (int p = 0; p < player.size(); p++)
	{
		for (int m = 0; m < machine.size(); m++)
		{
			if (player[p] == machine[m])
			{
				i++;
			}
		}
	}
	return i;
}


const void showResult(int i)
{
	cout << "A talalatok szama: " << i << endl;
}


void insertEmptyLine()
{
	cout << endl;
}