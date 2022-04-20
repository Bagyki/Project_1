
#include "card.h"



using namespace std;



int main()
{
	cout << "Udvozol a Blackjack! \n" << endl;
	
	srand(time(NULL));

    Card card;
    
    card.setDealer(card.randomNumber());
    card.playDealer();
    

    
    card.setPlayer(card.randomNumber());
    cout << "Az elso lapod erteke " << card.getPlayer() << endl;

    card.playPlayer();

 
    card.winner();

    //card.showPlayerCards();
    //card.showDealerCards();
    
   
}

