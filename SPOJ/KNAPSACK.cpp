#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int s,n;
   cin>>s>>n;
   vector< vector<int> > dp(n+1, vector<int>(s+1));
   int i,item[n][2];  // weight,value
   for(i=1;i<=n;i++)
       cin>>item[i][0]>>item[i][1];
   for(i=1;i<=n;i++)
        dp[i][0]=0;
   for(i=1;i<=n;i++)
   {
       for(int j=0;j<=s;j++)
       {
           if(item[i][0]<=j)
            dp[i][j]=max( dp[i-1][j], dp[i-1][j-item[i][0]]+ item[i][1] );
            else
            dp[i][j]=dp[i-1][j];
    }
   }
    cout<<dp[n][s];
return 0;
}
