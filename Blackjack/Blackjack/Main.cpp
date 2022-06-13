#include <iostream>
#include <time.h> 
#include "Dealer.h"
#include "Player.h"
#include "Card.h"
#include "Deck.h"


using namespace std;


int getNumberOfPlayers();

void createAndLoadPlayers(int players, vector<Player> &p);

void showAllPlayersCards(const vector<Player> &p);

void showDealerCards(Dealer dealer);

void winner(const int player, const int dealer);

void insertEmptyLine();


int main()
{
	srand(time(NULL));
	
	cout << "Udvozol a Blackjack! Sok szerencset!" << endl;
	
	vector<Player> p;
	Dealer dealer;
	Deck deck;

	deck.createDeck(Card::value, Card::colour);

	createAndLoadPlayers(getNumberOfPlayers(), p);
	

	if (p.size() > 0)
	{
		for (int i = 0; i < p.size(); i++)
		{
			cout << "\n" << "A " << i + 1 << ". jatekos" << endl;
			p[i].play(deck);
		}
	}
	else
	{
		cout << "Nincs jatekos!" << endl;
	}


	dealer.play(deck);

	system("cls");   //törli a konzolról a korábbiakat


	insertEmptyLine();


	showAllPlayersCards(p);
	

	insertEmptyLine();
	insertEmptyLine();


	showDealerCards(dealer);

	
	insertEmptyLine();
	insertEmptyLine();

	
	for (int i = 0; i < p.size(); i++)
	{
		cout << "A " << i + 1 << ". jatekos eredmenye: " << endl;
		winner(p[i].cardsValue(), dealer.cardsValue());
	}
	

}


int getNumberOfPlayers()
{
	int players = 0;
	do
	{
		cout << "Hany jatekos fog jatszani?" << endl;
		cin >> players;
	}
	while (players <= 0 || players > 4);

	return players;
}


void createAndLoadPlayers(int players, vector<Player> &p)
{
	for (int i = 0; i < players; i++)
	{
		Player player;
		p.push_back(player);
	}
}


void showAllPlayersCards(const vector<Player> &p)
{
	if (p.size() > 0)
	{
		for (int i = 0; i < p.size(); i++)
		{
			cout << "A " << i + 1 << ". jatekos lapjainak erteke: " << p[i].cardsValue() << endl;
			cout << "A " << i + 1 << ". jatekos lapjai: " << p[i].showCard() << endl;
		}
	}
}


void showDealerCards(Dealer dealer)
{
	cout << "Az oszto lapjainak erteke: " << dealer.cardsValue() << endl;
	cout << "Az oszto lapjai: " << dealer.showCard() << endl;
}


void winner(const int player, const int dealer)
{
	if (player == dealer && player < 22 && dealer < 22)
	{
		cout << "Az eredmeny dontetlen!" << endl;
	}
	else
	{
		if (player <= 21 && player > dealer || player <= 21 && dealer > 21)   // if (player <= 21 && (player > dealer || dealer > 21))
		{
			cout << "Nyertel! Gratulalunk!" << endl;
		}
		else
		{
			cout << "A bank nyert!" << endl;
		}

	}
}


void insertEmptyLine()
{
	cout << endl;
}