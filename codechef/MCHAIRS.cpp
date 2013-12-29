#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#define MOD 1000000007;
using namespace std;
long long exp(long long  base, long long  exp) {
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
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n;
       cin>>n;
       long long ans=exp(2,n);
       cout<<ans-1<<"\n";
   }

return 0;
}
