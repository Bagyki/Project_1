#ifndef PLAYINGLOTTERY_CPP
#define PLAYINGLOTTERY_CPP


#include "SixLottery.h"


class PlayingLottery
{
public:
	PlayingLottery() {};
	~PlayingLottery() {};

	const int getDraw(int i);
	////////////
	///	give back the value of "i" member from a PlayingLottery object's vector
	////////////
	//	return with a constant integer
	////////////

	const vector<int> getDraws();
	////////////
	///	give back the whole vector with Draws/Tips
	////////////
	//	return with a constant vector
	////////////

	void askForAndSavePlayerTips(SixLottery sixLottery);
	////////////
	//	ask for Player Tips about an object of SixLottery 
	//	save them to a PlayingLottery object
	//	use checkForSameDraw function
	////////////
	//	nothing to return
	////////////

	void randomDrawsOfMachine(SixLottery sixLottery);
	////////////
	//	"playing" of the machine, randomly generated draws
	//	save them to PlayingLottery object
	//	use randomDraw function
	////////////
	//	nothing to return
	////////////

	int randomDraw();
	////////////
	//	give back an integer about random generated number
	//	use the playable numbers of SixLottery
	////////////
	//	return with an integer
	////////////

	bool checkForSameDraw(int draw);
	///////////
	//	check if the Tip (Player) or Draw (Machine) already has the same Tip/Draw or not
	//////////
	//	return with a bool value, true = Tip/Draw was NOT yet
	//////////


private:
	vector<int> m_Draws;

};

#endif