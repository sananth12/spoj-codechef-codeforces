#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool RelativelyPrime (int a, int b) { // Assumes a, b > 0
  for ( ; ; ) {
    if (!(a %= b)) return b == 1 ;
    if (!(b %= a)) return a == 1 ;
  }
}
long long fast_exp(long long  base, long long exp,long long MOD) {
    long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
int main()
{
   long long n,k,m,i,sum=0;
   cin>>n>>k>>m;

   for(i=1;i<n;i++)
   {
       if( RelativelyPrime(i,n) )
       {
           sum+= fast_exp(i,k,m);
       }
   }
   cout<<sum;

return 0;
}
