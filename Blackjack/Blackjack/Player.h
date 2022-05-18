#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Deck.h"


class Player
{
public:
	Player(){}
	~Player(){}


	virtual int cardsValue() const;

	virtual void play(Deck &deck);

	virtual string showCard() const;


private:
	vector<Card> m_PlayerCards;

};


#endif