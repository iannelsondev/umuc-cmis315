/******************************************************************/
/* concatenation of the two 16-bit multiply with carry generators */
/* x(n)=a*x(n-1)+carry mod 2^16 and y(n)=b*y(n-1)+carry mod 2^16, */
/* with the number and carry packed within the same 32 bit        */
/* integer.  Algorithm due to Marsaglia                           */
/******************************************************************/
#ifndef RANDS_H
#define RANDS_H

typedef unsigned int Uint;


class Rands
   {
   public:
      Rands();

      void rand_seed( Uint );      // seed the generator
      Uint rand();                 // returns a random 32-bit integer
      double rand_float();         // returns a random float in (0,1]
      int rand( int lo, int hi );  // returns a random int from lo through hi

   private:
      Uint SEED_X;
      Uint SEED_Y;
   };

#endif
