#include "deck.h"
#include <iostream>
#include <ctime>

using namespace std;



void StandardDeck::shuffle()
   {
   for (Uint i=0; i < deck.size()-1; i++)
      swap( deck[i], deck[ r.rand(i,deck.size()-1) ] );
   top = 0;
   }


void StandardDeck::swap( Card &c1, Card &c2 )
   {
   Card temp = c1;
   c1 = c2;
   c2 = temp;
   }
