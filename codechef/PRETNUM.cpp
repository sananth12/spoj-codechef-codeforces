#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
int main()
{
  int t;
 long long  limit = 1000000;
 long long  root = ceil(sqrt(limit));
 bool sieve[limit];
 long long  primes[(limit/2)+1];
 long long  insert = 2;
 primes[0] = 2;
 primes[1] = 3;
 for (long long  z = 0; z < limit; z++) sieve[z] = false; //Not all compilers have false as the default boolean value
 for (long long  x = 1; x <= root; x++)
 {
 for (long long  y = 1; y <= root; y++)
 {
 //Main part of Sieve of Atkin
 long long  n = (4*x*x)+(y*y);
 if (n <= limit && (n % 12 == 1 || n % 12 == 5)) sieve[n] ^= true;
 n = (3*x*x)+(y*y);
 if (n <= limit && n % 12 == 7) sieve[n] ^= true;
 n = (3*x*x)-(y*y);
 if (x > y && n <= limit && n % 12 == 11) sieve[n] ^= true;
 }
 }
 //Mark all multiples of squares as non-prime
 for (long long  r = 5; r <= root; r++) if (sieve[r]) for (long long  i = r*r; i < limit; i += r*r) sieve[i] = false;
 //Add long long o prime array
 for (long long  a = 5; a < limit; a++)
 {
 if (sieve[a])
 {
 primes[insert] = a;
 insert++;
 //cout<<sieve[a];
 }
 }
 cout<<insert;
  cin>>t;
  sieve[1]=true;
  sieve[2]=true;
  sieve[3]=true;
  while(t--)
  {
  long long exponent,i,j,numberOfDivisors,l,r,num,ans=0;
  cin>>l>>r;
  int flag=0;

      for ( i = 0; primes[i]<=(r) ; i++)
      {
        long long x=primes[i],woo=1;
        while(x<=r)
        {
            if(x>=l)
            {
                if(sieve[woo+1])
                ans++;
            }
            x=x*primes[i];
            woo++;
        }
      }
    cout<<ans<<"\n";

  }

  return 0;
}
