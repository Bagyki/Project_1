#include <iostream>
#include <string>
#include "Player.h"
#include "Card.h"


using namespace std;


void Player::play(Deck &deck)
{
	m_PlayerCards.push_back(deck.getnewCard());
	cout << "Az elso lapod: " << cardsValue() << endl;
	string answer;
	do
	{
		cout << "Kersz uj lapot? i / n " << endl;
		cin >> answer;
		if (answer == "i")
		{
			m_PlayerCards.push_back(deck.getnewCard());
			cout << "A lapjaid jelenlegi erteke: " << cardsValue() << endl;
		}
	} while (answer == "i" && cardsValue() <= 21);
}


int Player::cardsValue() const
{
	int x = 0;
	for (int i = 0; i < m_PlayerCards.size(); i++)
	{
		x = x + m_PlayerCards[i].getValue();
	}
	return x;
}


string Player::showCard() const
{
	string playerCards;
	for (int i = 0; i < m_PlayerCards.size(); i++)
	{
		playerCards = playerCards + (m_PlayerCards[i].getColour() + " " + to_string(m_PlayerCards[i].getValue())) + "  ";
	}
	return playerCards;
}

