#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,m,arr[234][234],i,j;

    cin>>n>>m;

    int ans=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];

            if(arr[i][j]==1)
                ans++;
        }
    cout<<ans<<endl;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==1)
                cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
        }


return 0;
}
