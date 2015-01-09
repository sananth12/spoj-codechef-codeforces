#include<bits/stdc++.h>
using namespace std;

 
double dp[100][100];
int s[100][100];
int main()
{
  int t,n,i,j;
  double temp1,temp2;
  cin>>t;
  while(t--)
    {
      cin>>n;
      for(i=0;i<n;i++)
        {
	  for(j=0;j<n;j++)
            {
	      cin>>s[i][j];
            }
        }
      dp[0][0]=0;
      for(i=1;i<n;i++)
        {
	  dp[0][i]=(dp[0][i-1]+s[0][i]);
	  dp[i][0]=(dp[i-1][0]+s[i][0]);
        }
      for(i=1;i<n;i++)
        {
	  for(j=1;j<n;j++)
            {
	      temp1=(dp[i-1][j]+s[i][j]);
	      temp2=(dp[i][j-1]+s[i][j]);
	      if(temp1>temp2)
                {
		  dp[i][j]=temp1;
                }
	      else
                {
		  dp[i][j]=temp2;
                }
            }
        }

      dp[n-1][n-1]=(dp[n-1][n-2]>dp[n-2][n-1])?dp[n-1][n-2]:dp[n-2][n-1];
 
      if(dp[n-1][n-1]<0)
        {
	  printf("No funds\n");
        }
      else
        {
	  printf("%f\n",dp[n-1][n-1]/(2*n-3));
        }
      memset(s,0,sizeof(s));
      memset(dp,0,sizeof(dp));
    }
  return 0;
}
