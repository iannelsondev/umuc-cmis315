#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"
#include "rands.h"


class StandardDeck
   {
   public:
      void shuffle();                // shuffle the deck
   private:
      vector<Card> deck;             // the deck of cards
      Rands r;                       // random numbers used for shuffling
      void swap( Card &, Card & );   // used for shuffling
   };

#endif
