#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long GCD(long long small,long long large){
long long quotient=0,remainder=0;
	while(1){
		quotient=large/small;  remainder=large%small;
		if(remainder==0)break;
			large=small;
			small=remainder;
	}
return small;
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       long long n,m,no,ne,mo,me;
       cin>>n>>m;

       long long num,den=m*n;

       if(n%2==0)
        {
            no=n/2;
            ne=n/2;
        }
        else if(n==1)
        {
            no=1;
            ne=0;
        }
        else
        {
            ne=n/2;
            no=n-(ne);
        }

        if(m%2==0)
        {
            mo=m/2;
            me=m/2;
        }
        else if(m==1)
        {
            mo=1;
            me=0;
        }
        else
        {
            me=m/2;
            mo=m-(me);
        }

        num = (no*me)+(ne*mo);
        long long gcd= GCD(den,num);
        cout<<(num/gcd)<<"/"<<(den/gcd)<<endl;

   }

return 0;
}
