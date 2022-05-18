#include <stdio.h>      
#include <stdlib.h>  
#include "Card.h"
#include "Deck.h"


using namespace std;


vector<Card> Deck::getDeck() const
{
	return m_Deck;
}


void Deck::createDeck(array<int, 13> value, array<string, 4> colour) 
{
	Card card;
	for (int c = 0; c < colour.size(); c++)
	{
		card.setColour(colour[c]);
		for (int v = 0; v < value.size(); v++)
		{
			card.setValue(value[v]);
			m_Deck.push_back(card);
		}
	}
}


void Deck::showDeck() const
{
	for (int i = 0; i < m_Deck.size(); i++)
	{
		cout << m_Deck[i].getColour() << " " << m_Deck[i].getValue() << endl;
		//cout << m_Deck[i].showCard() << endl;
	}
}


int Deck::randomCardFromDeck(int deckSize)
{
	int x = rand() % deckSize;
	return x;
}


Card Deck::getnewCard()
{
	Card card;
	int i = randomCardFromDeck(m_Deck.size());
	card = m_Deck[i];
	m_Deck.erase(m_Deck.begin()+i);
	return card;
}

