#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll x,n,ans=0,i,ones=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
            {
                if(s[i]-'0')
                   {
                       ans+=ones+1;
                       ones++;
                   }
            }
        cout<<ans<<endl;
   }

return 0;
}
