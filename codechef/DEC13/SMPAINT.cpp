#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int i,j,t,n[1000][1000],cnt=0,k;
   scanf("%d",&t);
   int ans[100000][5];
   for(i=0;i<t;i++)
    for(j=0;j<t;j++)
        {
            cin>>n[i][j];

        }

    for(i=0;i<t;i++)
        for(j=0;j<t;j++)
        {

            if(n[i][j]!=0)
            {
                ans[cnt][0]=n[i][j];
                ans[cnt][1]=i+1;
                ans[cnt][3]=j+1;
                ans[cnt][2]=i+1;
                k=j+1;
                while(n[i][k]==n[i][j] && k<t)
                {
                   k++;
                }
                ans[cnt][4]=k;
                cnt++;
                j=k-1;
            }

        }
    cout<<cnt<<endl;
    for(i=0;i<cnt;i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<" "<<ans[i][3]<<" "<<ans[i][4]<<endl;

    }
return 0;
}
