#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
   int n;
   cin>>n;
   int i,arr[n];
   for(i=0;i<n;i++)
    cin>>arr[i];

    int dp[n];
    int min;
    dp[n-1] = 0;
    int  j;
    for (i = n-2; i >=0; i--)
    {
        if (arr[i] == 0)
            dp[i] = 100000000;
        else if (arr[i] >= n - i - 1)
            dp[i] = 1;
        else
        {
            min = 100000000;
            for (j = i+1; j < n && j <= arr[i] + i; j++)
                if (min > dp[j])
                    min = dp[j];
            if (min != 100000000)
              dp[i] = min + 1;
            else
              dp[i] = min;
        }
    }
    if(dp[0]==100000000)
        cout<<-1;
    else
    cout<<dp[0];
return 0;
}
