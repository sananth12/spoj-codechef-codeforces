#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,m;
        cin>>n>>m;
        int i,pair[m][2],map[10001]={0};
        vector < int > vec;
        vector < int >::iterator it;
        for(i=0;i<m;i++)
            cin>>pair[i][0]>>pair[i][1];
        for(i=m-1;i>=0;i--)
        {
            if(map[pair[i][0]]==0 && map[pair[i][1]]==0)
            {
                vec.push_back(i);
                map[pair[i][0]]=1;
                map[pair[i][1]]=1;
            }
        }
        sort(vec.begin(),vec.end());
        for(it=vec.begin();it!=vec.end();++it)
            cout<<*it<<" ";
        cout<<endl;
   }

return 0;
}
