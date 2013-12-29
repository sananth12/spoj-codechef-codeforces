#include<cstdio>
#include<math.h>
#include<iostream>
using namespace std;
unsigned long long MOD = 1000000007ll;
unsigned long long power(unsigned long long  base, unsigned long long  exp) {
    unsigned long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
int main()
{
   unsigned long long t;
   cin>>t;
   while(t--)
   {

        unsigned long long n,bin=0,arr[65]={0},pos=0,ans=0;
       cin>>n;
       int i;
        while(n>0)
        {
            arr[pos]=n%2;
            pos++;
            n=n/2;
        }
        //if(pos<=18)
        {
            for(i=pos-1;i>=0;i--)
            {
                bin=bin*10 + (arr[i]);
            }
            ans=power(2,bin);
            ans=(ans*ans)%MOD;
        }
        cout<<ans<<"\n";
   }
return 0;
}
