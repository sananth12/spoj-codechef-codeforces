#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll dp[101]={0},ans=0;
        ll n,k,i,x;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>x;
            ll tmp[101]={0};
            tmp[ x%k ]++;

            for(int j=0;j<k;j++)
                tmp[ (x+j)%k ]+=dp[j];

            for(int j=0;j<k;j++)
                {
                    dp[j]=tmp[j];
                }
            ans+=dp[0];
        }
        cout<<ans<<endl;
   }
return 0;
}
