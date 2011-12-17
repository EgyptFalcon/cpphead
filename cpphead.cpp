#include <iostream>
#include <string>
#include "console.h"
#include "card.h"
#include "player.h"
#include "game.h"

using namespace std ;

int main()
{
    int i, numPlayers, numCardsEach ;
    string * names ;
    clearScreen() ;
    showWelcomeMessage() ;
    numPlayers = requestNumPlayers() ;
    numCardsEach = requestNumCards() ;
    names = requestPlayerNames(numPlayers) ;

    Game game(names, numPlayers) ;
    
    cout << "Current player : " << game.getCurrentPlayer().getName() << endl ;

    Card tenDiamonds(TEN, DIAMONDS) ;

    cout << tenDiamonds.toString() << endl ;

    return 0 ;
}
    
