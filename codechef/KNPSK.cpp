#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int s,n;
   cin>>n;

   int i,item[n+1][2],sum=0;  // weight,value
   for(i=1;i<=n;i++)
       {
           cin>>item[i][0]>>item[i][1];
           sum+=item[i][0];
       }
   s=sum;
   int dp[100001];
   for(i=1;i<=n;i++)
        dp[i]=0;
   for(i=1;i<=n;i++)
   {
       for(int j=0;j<=s;j++)
       {
           if(item[i][0]<=j)
            dp[i]=max( dp[j], dp[j-item[i][0]]+ item[i][1] );
            else
            dp[i]=dp[j];

            cout<<dp[i]<<" ";
       }
       cout<<endl;
   }

   for(i=1;i<=s;i++)
    cout<<dp[i]<<" ";

   // cout<<dp[n-1][s];
return 0;
}
