#ifndef CARD_H
#define CARD_H

#include <iostream>


using namespace std;



class Card
{
public:
	Card()
	{
		m_Player = 0;
		m_Dealer = 0;
	}

	~Card()
	{
	}

	void setPlayer(int player);
	int getPlayer() const;
	
	void setDealer(int dealer);
	int getDealer() const;
	

	int randomNumber();
	

	void showPlayerCards() const;
	void showDealerCards() const;
	

	bool askForNewCard();
	

	int playDealer();
	int playPlayer();

	void winner();
	

private:
	int m_Player;
	int m_Dealer;

};



#endif


