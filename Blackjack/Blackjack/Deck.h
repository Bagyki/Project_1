#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"


class Deck
{
public:
	Deck(){}
	~Deck(){}

	
	vector<Card> getDeck() const;

	void createDeck(array<int, 13> value, array<string, 4> colour);
	
	void showDeck() const;

	int randomCardFromDeck(int deckSize);

	Card getnewCard();
	

private:
	vector<Card> m_Deck;

};





#endif
