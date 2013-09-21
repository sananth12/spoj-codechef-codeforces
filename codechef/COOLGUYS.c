/*
-- Anantha Natarajan.S
-- Sept 13 2013
-- Problem COOLGUYS/SEPT13
-- GCC 4.8
*/
#include<stdio.h>
#include<math.h>
#define gc getchar_unlocked
long long scanint()
{
    register long long c = gc();
    long long x = 0;
    long long neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;

    return x;
}
long long gcd(long long  a, long long  b)
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int main()
{
   int t;
    long long n,i,num=0,den=0,r=0,k;
   scanf("%d",&t);
   while(t--)
   {
       num=0,den=0;
      //scanf("%lld",&n);
      n=scanint();
      r=sqrt(n);
      for(i=1,k=1;i<r;i++,k++)
      {
          num+= (n/i) ;
          num+= k*(floor(n/k)-floor(n/(k+1)));
      }
      num+= (n/r);
      num+=r*(floor(n/r)-r);
      den=n*n;
      long long GCD=gcd(num,den);
      num/=GCD;
      den/=GCD;
      printf("%lld/%lld\n",num,den);

   }


return 0;
}
