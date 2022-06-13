#include <iostream>  
#include <string>
#include "Dealer.h"


using namespace std;


void Dealer::play(Deck &deck)
{
	do
	{
		m_Cards.push_back(deck.getnewCard());
	} while (cardsValue() < 17);
}


int Dealer::cardsValue() const
{
	int x = 0;
	for (int i = 0; i < m_Cards.size(); i++)
	{
		x = x + m_Cards[i].getValue();
	}
	return x;
}


string Dealer::showCard() const
{
	string dealerCards;
	for (int i = 0; i < m_Cards.size(); i++)
	{
		dealerCards = dealerCards + (m_Cards[i].getColour() + " " + to_string(m_Cards[i].getValue())) + "  ";
	}
	return dealerCards;
}