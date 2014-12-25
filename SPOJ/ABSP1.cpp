#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll n;
        cin>>n;
        ll a[n],ans=0,i,cum=0,tot=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            tot+=a[i];
        }
        for(i=0;i<n;i++)
        {
            cum+=a[i];
            ans += (tot-cum)-(n-1-i)*a[i];
        }

         cout<<ans<<endl;
   }

return 0;
}
