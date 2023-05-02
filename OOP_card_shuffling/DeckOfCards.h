// Exercise 10.10 Solution: DeckOfCards.h// Class DeckOfCards represents a deck of 52 playing cards.
#ifndef DECK_OF_CARDS_H
#define DECK_OF_CARDS_H

#include <stdlib.h>
#include <time.h> 
#include <vector>
#include "Card.h"
using namespace std;

// DeckOfCards class definition
class DeckOfCards
{
	public:
	DeckOfCards(){
		for(int i=0;i<13;i++)
			{
				for(int j=0;j<4;j++)
					{
						Card temp(i,j);
						deck.push_back(temp);
					}
			}
		currentCard=0;
	}; // constructor initializes deck
	
	Card getCard(int i){
		return deck[i];		
	}
	
	void shuffle(){
		srand(time(0));
		for(int i=0;i<52;i++)
		{
			Card temp(1,1);
			int ran=rand()%52;
			temp=deck[i];
			deck[i]=deck[ran];
			deck[ran]=temp;
		}
	}; // shuffles cards in deck
	
	Card dealCard(){
		if ( moreCards() )
		return deck[ currentCard++ ];
	}; // deals cards in deck
	
	bool moreCards() const{
		if ( currentCard < 5 ){
			return true;
		}
		else
		return false;
	}; // are there any more cards left
	
	private:
	vector< Card > deck; // represents deck of cards
	unsigned currentCard; // index of next card to be dealt
}; // end class DeckOfCards

#endif


/**************************************************************************
 * (C) Copyright 1992-2011 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/

