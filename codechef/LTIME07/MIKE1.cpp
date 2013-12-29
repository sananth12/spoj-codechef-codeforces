#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long long i,j,n,m,l,e1=0,e2=0;
   cin>>n>>m;
   int arr[501][501];
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
           cin>>arr[i][j];
       }
   }
   //cout<<"*\n";
   cin>>l;
   for(i=0;i<l;i++)
   {
       int x,y;
       cin>>x>>y;

       if(e1!=-1){
       if(x>n || y>m)
        e1=-1;
       else
        e1+= arr[x][y];
       }
       if(e2!=-1){
        if(y>n || x>m)
           e2= -1;
        else
            e2+=arr[y][x];
       }
        //cout<<i<<"*\n";
   }

    cout<<max(e1,e2);

return 0;
}
