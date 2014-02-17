#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   float n,m,a[100][100],b[100][100],p[100][100],count=0;
   int i,j;
   cin>>n>>m;



   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
        {
            cin>>p[i][j];
        }
   }

  int cnt=0;

    for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
            if(((int)a[i][j]+1)% (int)p[i][j]==0)
            {
                cnt++;
                b[i][j]=-1;
            }
        }
   }
   if(cnt>2)
   {
       cout<<m*n - cnt +1 <<endl;
       cout<<"1 1 "<<n<<" "<<m<<" 1\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                  if(b[i][j]!=-1)
                  cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<" "<<p[i][j]*ceil( b[i][j]/p[i][j] ) - b[i][j]<<endl;
            }
        }
   }
   else
   {
       cout<<m*n<<endl;
         for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

                  cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<" "<<p[i][j]*ceil( a[i][j]/p[i][j] ) - a[i][j]<<endl;
            }
        }
   }

return 0;
}
