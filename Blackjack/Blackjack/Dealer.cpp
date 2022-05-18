#include <iostream>  
#include <string>
#include "Dealer.h"


using namespace std;


void Dealer::play(Deck &deck)
{
	do
	{
		m_DealerCards.push_back(deck.getnewCard());
	} while (cardsValue() < 17);
}


int Dealer::cardsValue() const
{
	int x = 0;
	for (int i = 0; i < m_DealerCards.size(); i++)
	{
		x = x + m_DealerCards[i].getValue();
	}
	return x;
}


string Dealer::showCard() const
{
	string dealerCards;
	for (int i = 0; i < m_DealerCards.size(); i++)
	{
		dealerCards = dealerCards + (m_DealerCards[i].getColour() + " " + to_string(m_DealerCards[i].getValue())) + "  ";
	}
	return dealerCards;
}