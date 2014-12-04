#include<bits/stdc++.h>
#define ll long long
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;
int a[1000002],dp[1000002]={1},lis=1;
int main()
{
    int n;
    cin>>n;
    FOR(0,n,1)
        cin>>a[i];
    FOR(1,n,1)
        {
            for(int j=0;j<i;j++)
                if( a[j]<a[i] && dp[j]+1>dp[i])
                    {
                        dp[i] = dp[j]+1;
                        lis = max(lis,dp[i]);
                    }
        }
        cout<<lis;
    return 0;
}
