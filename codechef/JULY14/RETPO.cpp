#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll x,y,ans=0;
        cin>>x>>y;
        x=abs(x);
        y=abs(y);
        if( (x+y)%2==0)
            ans= 2*max(x,y);
        else
            ans = 2*max(x,y-1) +1;
        cout<<ans<<endl;
   }
return 0;
}
