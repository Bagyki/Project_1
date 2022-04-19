#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 

#include "Card.h"


using namespace std;

/*
int randomNumber();
bool askForNewCard();
void winner(int a, int b);
void winner2(int card, int dealerCard);
int player(int card);
*/

int main()
{
	cout << "Udvozol a Blackjack!" << endl;
	
	srand(time(NULL));

    Card card;

    int dealer = card.randomNumber();
    //card.setDealer(dealer);
    card.playDealer(dealer);
    card.setDealer(dealer);
    /*
    card.setDealer(card.randomNumber());
    card.playDealer2();
    */

    int player = card.randomNumber();
    card.setPlayer(player);
    cout << "Az elso lapod erteke " << card.getPlayer() << endl;

    bool ask = true;

    do
    {
        ask = card.askForNewCard();
        if (ask == true)
        {
            int x = card.randomNumber();
            player = player + x;
            card.setPlayer(player);
            card.showPlayerCards();
        }
    } while (ask == true && card.getPlayer() <= 21);

    
    if (ask == false)
    {
        card.setPlayer(player);
    }
    
    //card.setPlayer(player);

    card.showPlayerCards();
    card.showDealerCards();
    card.winner(player, dealer);


    /*
    int card = randomNumber();
	cout << "Az elso lapod erteke " << card << endl;
	
    int dealerCard = randomNumber();
    do
    {
        int y = randomNumber();
        dealerCard = dealerCard + y;
    } 
    while (dealerCard < 17);

    if (dealerCard == 17)
    {
        return dealerCard;
    }

    player(card);

    /*
    bool ask = true;
    
    do 
    {
        ask = askForNewCard();
        if (ask == true)
        {
            int x = randomNumber();
            card = card + x;
            cout << "A lapjaid erteke " << card << endl;
        }
    } 
    while (ask == true && card <= 21);
    
    if (ask == false)
    {
        //cout << "A lapjaid osszerteke: " << card << endl;
        return card;
    }
    
        
    winner(card, dealerCard);
    winner2(card, dealerCard);
    */
}

/*
int randomNumber()
{
	int x = rand() % 11 + 1;
	return x;
}

int player(int card)
{
    bool ask = true;

    do
    {
        ask = askForNewCard();
        if (ask == true)
        {
            int x = randomNumber();
            card = card + x;
            cout << "A lapjaid erteke " << card << endl;
        }
    } 
    while (ask == true && card <= 21);

    /*if (ask == false)
    {
        //cout << "A lapjaid osszerteke: " << card << endl;
        //return card;
    }
    
    return card;
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

void winner(int a, int b)
{
    cout << a << endl;
    cout << b << endl;
}

void winner2(int card, int dealerCard)
{
    cout << "Jatekos: " << card << ", " << "Oszto: " << dealerCard << endl;
    if (card == dealerCard)
    {
        cout << "Az eredmeny dontetlen!" << endl;
    }
    if (card > 21)
    {
        cout << "A bank nyert!" << endl;
    }
    if (dealerCard > 21)
    {
        cout << "Nyertel! Gratulalunk!" << endl;
    }
    if (card <= 21 && dealerCard <= 21)
    {
        if (21 - card < 21 - dealerCard)
        {
            cout << "Nyertel! Gratulalunk!" << endl;
        }
        else
        {
            cout << "A bank nyert!" << endl;
        }
    }

}
*/