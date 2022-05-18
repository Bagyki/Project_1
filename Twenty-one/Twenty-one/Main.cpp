
#include "card.h"



using namespace std;



int main()
{
	cout << "Udvozol a Blackjack! \n" << endl;
	
	srand(time(NULL));

    Card card;


    
    card.playDealer();
    

    cout << "Jatekos 1" << endl;
    card.setPlayer(0, card.randomNumber());
    cout << "Az elso lapod erteke " << card.getPlayer(0) << endl;

    int player1 = card.playPlayer(card.getPlayer(0));
    card.setPlayer(0, player1);

    cout << "Jatekos 2" << endl;
    card.setPlayer(1, card.randomNumber());
    cout << "Az elso lapod erteke " << card.getPlayer(1) << endl;

    int player2 = card.playPlayer(card.getPlayer(1));
    card.setPlayer(1, player2);

 
    card.winner();

    //card.showPlayerCards();
    //card.showDealerCards();
    
   
}

