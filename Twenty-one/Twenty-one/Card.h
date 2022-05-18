#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>

using namespace std;



class Card
{
public:
	Card()
	{
		m_Players = {0,0,0,0,0};
		m_Dealer = 0;
	}

	~Card()
	{
	}

	void setPlayer(int playersNumber, int player);
	int getPlayer(int playersNumber) const;
	
	void setDealer(int dealer);
	int getDealer() const;
	

	int randomNumber();
	

	void showPlayerCards(int player) const;
	void showDealerCards() const;
	

	bool askForNewCard();
	

	int playDealer();
	int playPlayer(int player);

	void winner();
	

private:
	vector<int> m_Players;
	int m_Dealer;

};



#endif


