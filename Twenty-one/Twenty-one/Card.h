

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card
{
public:
	Card()
	{
		m_Player = 0;
		m_Dealer = 0;
	}

	~Card()
	{
	}

	void setPlayer(int player)
	{
		m_Player = player;
	}
	int getPlayer()
	{
		return m_Player;
	}
	void setDealer(int dealer)
	{
		m_Dealer = dealer;
	}
	int getDealer()
	{
		return m_Dealer;
	}

	int randomNumber()  //static
	{
		int x = rand() % 11 + 1;
		return x;
	}

	void showPlayerCards()
	{
		cout << "A lapjaid erteke " << getPlayer() << endl;
	}
	void showDealerCards()
	{
		cout << "Az oszto lapjainak erteke: " << getDealer() << endl;
	}

	bool askForNewCard()
	{
		string answer;
		const string kerdes = "Kersz uj lapot?";
		do
		{
			cout << kerdes << endl;
			cin >> answer;
		} 
		while (answer != "i" && answer != "n");

		if (answer == "i")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void winner(int player, int dealer)
	{
		cout << "Jatekos: " << getPlayer() << ", " << "Oszto: " << getDealer() << endl;
		if (player == dealer)
		{
			cout << "Az eredmeny dontetlen!" << endl;
		}
		if (player < 22 && dealer < 22)
		{
			if (player > dealer)
			{
				cout << "Nyertel! Gratulalunk!" << endl;
			}
			else
			{
				cout << "A bank nyert!" << endl;
			}
		}
		if (player > 21)
		{
			cout << "A bank nyert!" << endl;
		}
		if (dealer > 21)
		{
			cout << "Nyertel! Gratulalunk!" << endl;
		}
	}

	int playDealer(int dealer)
	{
		do
		{
			int x = randomNumber();
			dealer = dealer + x;
			setDealer(dealer);
		} 
		while (dealer < 17);

		if (dealer == 17)
		{
			//setDealer(dealer);
		}
		return dealer;
	}

	int playDealer2()
	{
		do
		{
			int x = randomNumber();
			m_Dealer = m_Dealer + x;
			setDealer(m_Dealer);
		} 
		while (m_Dealer < 17);

		if (m_Dealer == 17)
		{
			setDealer(m_Dealer);
		}
		return m_Dealer;
	}



private:
	int m_Player;
	int m_Dealer;
};





#endif


