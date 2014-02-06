#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t,n,k,i,w,c;
 cin>>t;
  while(t--)
  {
     cin>>n>>k;
    vector < pair< int ,int > > vec;
    vector < pair< int ,int > >::iterator it;
   for(i=0;i<n;i++)
   {
        cin>>c>>w;
        vec.push_back(make_pair(c,w));
   }

   sort(vec.begin(),vec.end());
   int ans=0;

   for(it=vec.begin();it!=vec.end();++it)
   {
       if( k-(it->first)>=0)
       {
           ans++;
           k=k- (it->first);
          // cout<<it->first<<" ";
       }
   }

   cout<<ans<<endl;

  }
return 0;
}
