#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;

   int tree[100][100]={0};
   int i,j,u,v;
   for(i=0;i<m;i++)
   {
        cin>>u>>v;
        tree[u][v]=1;
        tree[v][u]=1;
   }


return 0;
}
