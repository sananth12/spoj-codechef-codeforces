#include<bits/stdc++.h>
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    int b,n;
    cin>>b>>n;
    while( b+n )
    {
        int c[n+2],h[n+2],dp[102][502]={0};
        FOR(1,n+1,1)
            cin>>c[i]>>h[i];

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=b;j++)
            {
                if(j<c[i])
                    dp[i][j] = dp[i-1][j];
                else
                {
                    dp[i][j] = max( dp[i-1][j], dp[i-1][-c[i]+j]+ h[i]);
                }
               // cout<<dp[i][j]<<"-";
            }
           // cout<<endl;
        }
        int i;
        for(i=b;i>0;i--)
            if(dp[n][i]!=dp[n][i-1])
                break;
        cout<<i<<" "<<dp[n][b]<<endl;
        cin>>b>>n;
    }
    return 0;
}
