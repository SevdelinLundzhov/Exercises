//============================================================================
// Name        : Zadacha_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Card
{
public:
   // TODO: provide suitable constructor...

   enum Suit {Hearts, Diamonds, Clubs, Spades};
   enum Rank {A, K, Q, J, _10, _9, _8, _7, _6, _5, _4, _3, _2};

   Suit getSuit()
   {
	   return suit;
   }
   Rank getRank()
   {
	   return rank;
   }

   // TODO: implement setters, etc...

   bool operator==(const Card& c) const
   {
      return rank == c.rank && suit == c.suit;
   }

private:
   Suit suit;
   Rank rank;
};

int main() {
    Card c;


    if (c.getSuit() != 4)
    {
        std::cout << "Wrong suit!" << std::endl;
    }

    return 0;
}
