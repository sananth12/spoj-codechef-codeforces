#include<cstdio>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
 /*struct sort_pred {
    bool operator()(const pair<int,int> &left, const pair<int,int> &right) {
        return left.second < right.second;
    }
};*/
 int main()
{
int t1;
vector < pair <long long,long long> > vec;
scanf("%d",&t1);
int t[100080]={0};
while(t1--)
 {

     pair <long long,long long> sn;
     vec.empty();
     vec.clear();
     //vector < pair <int,int> > vec;
     int n,tmp;
     scanf("%d",&n);
     int z=0;
    long long x,y;
    for(z=1;z<=n;z++)
      {
       scanf("%lld%lld",&x,&y);
       sn=make_pair(x,y);
       vec.push_back(sn);
       t[z]=0;
     }
sort(vec.begin(),vec.end());
//int t[100080]={0};
long long ans=0;
int count1=0,i=0;
for(i=0;i<vec.size();i++)
   {
       pair<long long,long long> p;
    p=vec[i];
    if(t[p.first]==0)
       {
       t[p.first]=1;
       count1++;
       }
     ans+=(count1*(p.second));
   }
printf("%lld\n",ans);
 }
return 0;
}
