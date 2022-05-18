#ifndef DEALER_H
#define DEALER_H

#include <vector>
#include "Player.h"
#include "Card.h"
#include "Deck.h"


class Dealer : public Player
{
public:
	Dealer(){}
	~Dealer(){}


	int cardsValue() const override;

	void play(Deck &deck) override;

	string showCard() const override;


private:
	vector<Card> m_DealerCards;

};


#endif