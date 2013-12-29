#include <iostream>
#include<vector>
#include<cmath>
#include<string.h>
#include<algorithm>
int main()
{
   long long  limit = 1000000;

   std::vector<bool> isPrime;
   for( long long  i = 0; i < limit; ++i ){
      isPrime.push_back( false );
   }

   long long  n = 0;
   for( long long  x = 1; x <= ceil( sqrt( limit ) ); ++x ){
      for( long long  y = 1; y <= ceil( sqrt( limit ) ); ++y ){

         n = 4*x*x + y*y;
         if( (n <= limit) && ( n%12 == 1 || n%12 == 5 ) ){
            isPrime.at(n) = ! isPrime.at(n);
         }

         n = 3*x*x + y*y;
         if( (n <= limit) && ( n%12 == 7 ) ){
            isPrime.at(n) = ! isPrime.at(n);
         }

         n = 3*x*x - y*y;
         if( (x > y) && (n <= limit) && (n%12 == 11) ){
            isPrime.at(n) = ! isPrime.at(n);
         }
      }
   }

   for( n = 6; n <= ceil( sqrt( limit ) ); n += 2 ){
      if( isPrime.at(n) ){
         for( long long  m = n*n; m < limit; m += n*n ){
            isPrime.at(m) = false;
         }
      }
   }


   return 0;
}
