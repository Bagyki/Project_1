#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Deck.h"
#include "Card.h"  ////   !!!!!!!!!!!!!!!!!!!!!!  kell, hi�ba ismeri m�r a Deck oszt�ly


class Player
{
public:
	Player(){}
	~Player(){}


	virtual int cardsValue() const;

	virtual void play(Deck &deck);

	virtual string showCard() const;


protected:
	vector<Card> m_Cards;

private:
	
};


#endif