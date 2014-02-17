#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<map>
#include<cstdlib>
#define size 1000
using namespace std;
int main()
{
    pair<int,int>p;

    vector<pair<int,int> >v;
    //vector<int>diff;
    int t;
    scanf("%d",&t);
    while(t--)
    {
       v.clear();
       int n,m,k,max1[1002];
       scanf("%d%d%d",&n,&m,&k);
       int paint[n+1];
       for(int i=1;i<=n;i++)
       scanf("%d",&paint[i]);
       int benifit[n+1][m+1],cost[n+1][m+1],max2[n+1];
       for(int i=1;i<=n;i++)
       {
         for(int j=1;j<=m;j++)
         {
            scanf("%d",&benifit[i][j]);
            if(paint[i]==j)
            max1[i]=benifit[i][j];
         }
       }
       //int k=0;
       for(int i=1;i<=n;i++)
       {
         int temp=0,k=0;
         for(int j=1;j<=m;j++)
         {
            scanf("%d",&cost[i][j]);
            if(temp<(benifit[i][j]-cost[i][j]))
            {
              temp=benifit[i][j]-cost[i][j];
              k=j;
            }
         }
         //printf("%d\n",k);
         max2[i]=temp;
         p.first=max2[i]-max1[i];
         p.second=i;
         v.push_back(p);
       }

        int result=0;
        sort(v.rbegin(),v.rend());
      //  int l=max(n,k);
        vector<pair<int,int> >:: iterator it;
        /*if(l==n)
        {
          for( i=v.begin();i!=v.end();i++)
          result+=i->first;
        }*/

        for( it=v.begin();it!=v.end();it++)
        {
        //  printf("%d\n",max2[i]);
          if( k>0 && it->first>0)
          {
          result+=max2[it->second];
        //  printf("%d\n",result);
          k--;
          }
          else
          result+=max1[it->second];
        }

        printf("%d\n",result);
    }
    return 0;
}
