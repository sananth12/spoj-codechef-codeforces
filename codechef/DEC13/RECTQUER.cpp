#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int i,j,t,n[300][300][11]={0},k,q,x1,y1,x2,y2,l;
   scanf("%d",&t);
   //t=fastinput();
   for( i=0;i<t;i++)
        for( j=0;j<t;j++)
            {
                scanf("%d",&n[i][j][0]);
                n[i][j][n[i][j][0]]++;
                for(k=j+1;k<t;k++)
                    n[i][k][n[i][j][0]]++;
            }
            //n[i][j]=fastinput();
    cin>>q;

    //q=fastinput();
    for(i=0;i<q;i++)
    {
        int arr[11]={0},ans=0,c=0,d=0;

        cin>>x1>>y1>>x2>>y2;
        for(k=x1-1;k<x2;k++)
            {
                for(int w=1;w<=10;w++)
                {
                    if(y1>1)
                    {if(n[k][y2-1][w]-n[k][y1-2][w]>0)
                        arr[w]++;
                    }
                    else
                    if(n[k][y2-1][w]>0)
                        arr[w]++;
                }
            }
        for(l=1;l<=10;l++)
            if(arr[l]>0)
                ans++;
        cout<<ans<<endl;
    }

return 0;
}
