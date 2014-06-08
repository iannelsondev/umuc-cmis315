#include "card.h"

#include <iostream>
using namespace std;


ostream& operator<<( ostream &stream, const Card &card )
   {
   stream << Card::rank_str[ card.rank ] << " of " 
          << Card::suit_str[ card.suit ];
   return stream;
   }



      
