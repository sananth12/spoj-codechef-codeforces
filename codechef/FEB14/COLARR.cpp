#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second > right.second;
    }
};

int main()
{
   int t;
   cin>>t;
   int cost,point[1005][1005],final[1005]={0},data[1005]={0},arr[1005]={0};
   vector < pair < int , int > > vec;

   while(t--)
   {
        int n,m,k,ans=0;
        cin>>n>>m>>k;

        int i,j;
        for(i=1;i<=n;i++)
            {
                scanf("%d",&arr[i]);
            }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                {
                    scanf("%d",&point[i][j]);
                    if(j== arr[i])
                        data[i]=point[i][j];

                }
        }
        vec.clear();
        for(i=1;i<=n;i++)
        {
            int init=0,flag=0;
            for(j=1;j<=m;j++)
                {
                    scanf("%d",&cost);

                    if(point[i][j]-cost>init)
                    {
                        init=point[i][j]-cost;
                        flag=j;
                    }
                }
                final[i]=init;
                vec.push_back(make_pair(final[i]-data[i],i));
        }

        vector < pair < int , int > >::iterator it;
        sort(vec.rbegin(), vec.rend());
        for( it=vec.begin();it!=vec.end();it++)
        {
          if( k>0 && it->first>0)
          {
                ans+=final[it->second];
                k--;
          }
          else
          ans+=data[it->second];
        }

        cout<<ans<<endl;

        vec.clear();


   }

return 0;
}
