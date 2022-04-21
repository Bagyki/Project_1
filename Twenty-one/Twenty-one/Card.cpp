#include <iostream>
#include <string>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 

#include "card.h"

using namespace std;



void Card::setPlayer(int player)
{
	m_Player = player;
}

int Card::getPlayer() const
{
	return m_Player;
}

void Card::setDealer(int dealer)
{
	m_Dealer = dealer;
}

int Card::getDealer() const
{
	return m_Dealer;
}

int Card::randomNumber()
{
	int x = rand() % 11 + 1;
	return x;
}

void Card::showPlayerCards() const
{
	cout << "A lapjaid erteke " << getPlayer() << endl;
}

void Card::showDealerCards() const
{
	cout << "Az oszto lapjainak erteke: " << getDealer() << endl;
}

bool Card::askForNewCard()
{
	string answer;
	const string kerdes = "Kersz uj lapot?";
	do
	{
		cout << kerdes << endl;
		cin >> answer;
	}
	while (answer != "i" && answer != "n");

	/*
	if (answer == "i")
	{
		return true;
	}
	else
	{
		return false;
	}
	*/
	return answer == "i";
}


int Card::playDealer()
{
	do
	{
		int x = randomNumber();
		m_Dealer = m_Dealer + x;
	}
	while (m_Dealer < 17);

	return m_Dealer;
}


int Card::playPlayer()
{
	bool ask = true;
	do
    {
        ask = askForNewCard();
        if (ask == true)
        {
            int x = randomNumber();
            m_Player = m_Player + x;
            showPlayerCards();
        }
    } 
    while (ask == true && m_Player <= 21);
    
	return m_Player;
}


void Card::winner()
{
	cout << "Jatekos: " << m_Player << ", " << "Oszto: " << m_Dealer << endl;
	
	if (m_Player == m_Dealer && m_Player < 22 && m_Dealer < 22)
	{
		cout << "Az eredmeny dontetlen!" << endl;
	}
	else
	{
		if (m_Player <= 21 && m_Player > m_Dealer || m_Player <= 21 && m_Dealer > 21)   // if (m_Player <= 21 && (m_Player > m_Dealer || m_Dealer > 21))
		{
			cout << "Nyertel! Gratulalunk!" << endl;
		}
		else
		{
			cout << "A bank nyert!" << endl;
		}

	}
}

