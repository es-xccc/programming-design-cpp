// Exercise 10.11 Solution: Hand.h
// Stores and calculates attributes of a hand of cards.
#ifndef HAND_H
#define HAND_H

#include <string>
#include <vector>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

class Hand
{
public:
	// constructor takes 5 cards from Deck
	Hand( DeckOfCards &deck ){
		for(int i=0;i<5;i++){
			hand[i]=deck.getCard(i);
		}
	};
	
	void print() const{
		for(int i=0;i<5;i++){
			cout<<hand[i].toString(hand[i].getFace(),hand[i].getSuit());
		}
	}; // display hand
	
	// determine if we have the given scoring hand
	bool pair() const{
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(hand[i].getFace()==hand[j].getFace() && hand[i].getSuit()==hand[j].getSuit())
				{
					return true;
				}
			}
		}
		return false;
	};
	bool twoPair() const{
		int k=0;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(hand[i].getFace()==hand[j].getFace() && hand[i].getSuit()==hand[j].getSuit())
				{
					k++;
				}
			}
		}
		if(k>=2)return true;
		else return false;
	};
	bool threeOfAKind() const{
		int k=0;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(hand[i].getFace()==hand[j].getFace() && hand[i].getSuit()==hand[j].getSuit())
				{
					k++;
				}
			}
		}
		if(k>=2)return true;
		else return false;
	};
	bool fourOfAKind() const{
		int k=0;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(hand[i].getFace()==hand[j].getFace() && hand[i].getSuit()==hand[j].getSuit())
				{
					k++;
				}
			}
		}
		if(k>=2)return true;
		else return false;
	};
	bool flush() const{
		int k=0;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(hand[i].getFace()==hand[j].getFace() && hand[i].getSuit()==hand[j].getSuit())
				{
					k++;
				}
			}
		}
		if(k>=2)return true;
		else return false;
	};
	bool straight() const{
		int k=0;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<5;j++){
				if(hand[i].getFace()==hand[j].getFace() && hand[i].getSuit()==hand[j].getSuit())
				{
					k++;
				}
			}
		}
		if(k>=2)return true;
		else return false;
	};
private:
	vector< Card > hand; // our hand
	vector< int > faceCount; // number of each face
}; // end class Hand

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
