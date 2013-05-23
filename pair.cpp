#include<cstdio>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
vector < pair <int,int> > vec;

bool ops(const pair<int,int> &left, const pair<int,int> &right)
      {
          return left.second < right.second;
      }

 int main()
{
int t1;
scanf("%d",&t1);

while(t1--)
 {

     pair <int,int> sn;
    int t[100080]={0};
     //vector < pair <int,int> > vec;
     int n,tmp;
     scanf("%d",&n);
     int z=0;
    int x,y;
    for(z=1;z<=n;z++)
      {
       scanf("%d%d",&x,&y);
       sn=make_pair(x,y);
       vec.push_back(sn);
     }
sort(vec.begin(),vec.end(),ops);
//int t[100080]={0};
long long ans=0;
int count1=0,i=0;
for(i=0;i<vec.size();i++)
   {
       pair<int,int> p;
    p=vec[i];
    if(t[p.first]==0)
       {
       t[p.first]=1;
       count1++;
       }
     ans+=(count1*(p.second));
   }
printf("%lld\n",ans);
vec.clear();
 }
return 0;
}
