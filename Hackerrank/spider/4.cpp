#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    ll t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll n,m;
        cin>>n>>m;

        ll ne=n/2, no=n/2 + (n%2);
        ll me=m/2, mo=m/2 + (m%2);

        if(ne==0 && me==1)
            cout<<0/(m*n)<<endl;

        ll num= ne*m + no*me;
        ll den= m*n;
        ll g=gcd(den,num);
        num = num/g;
        den = den/g;
        cout<<num<<"/"<<den<<endl;
   }

return 0;
}
