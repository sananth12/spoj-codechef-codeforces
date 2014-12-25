#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007

int Pow(int a,int b)
{
int x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}

int modInverse(int a, int m) {
    return Pow(a,m-2,m);
}
long long fast_exp(long long base, long long exp)
 {
    long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
using namespace std;
int main()
{
   ll t;
   while(scanf("%lld",&t))
   {
        ll ans= modInverse( fast_exp(2,t) - 1 , 3);
        cout<<ans<<endl;
   }

return 0;
}
