#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll x,y;
        cin>>x>>y;
        if(y==0)
            cout<<1<<endl;
        else {
        x=x%10;
        y=y%4;
        if (y==0)
            y=4;
        ll ans = (ll)pow(x,y) % 10;
        cout<<ans<<endl;
        }
   }

return 0;
}
