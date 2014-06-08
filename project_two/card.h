#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;


class Card
   {
   friend ostream& operator<<( ostream &stream, const Card &card );
   public:

   private:
      static char *suit_str[4];         // output strings for suit
      static char *rank_str[14];        // output strings for rank
   };

#endif
