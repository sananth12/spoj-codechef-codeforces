#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int j,i,cnt=0,cross=0;
   char a[n+1][n+1];
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='#')
                        cnt++;
            }
   }

   if(cnt%5!=0)
   {
       cout<<"NO";
   }
   else if(cnt==0)
   {
       cout<<"YES";
   }
   else
   {
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<n-1;j++)
            {
                if(a[i][j]=='#')
                {
                    if( a[i-1][j]=='#' && a[i+1][j]=='#' && a[i][j-1]=='#' && a[i][j+1]=='#'  )
                    {
                        a[i-1][j]='.';
                        a[i+1][j]='.';
                        a[i][j-1]='.';
                        a[i][j+1]='.';
                        a[i][j]='.';

                        cross++;
                    }
                }
            }
        }

        if(cross == cnt/5)
            cout<<"YES";
        else
            cout<<"NO";
   }
return 0;
}
