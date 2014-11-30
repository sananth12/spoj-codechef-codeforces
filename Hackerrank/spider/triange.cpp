#include<bits/stdc++.h>
using namespace std;
struct point{
  int x,y;
  double m;
}p[1001];
int tri(point a,point b,point c){
     int mx,my,nx,ny;
     mx=b.x-a.x; my=b.y-a.y;
     nx=c.x-b.x; ny=c.y-b.y;
     if( nx*my==ny*mx ) return 0;
     return 1;
}
bool cmp(point a,point b){
     return a.m < b.m;
}
int nC3(int a){
    if( a<3 ) return 0;
    int ans=1;
    for(int i=1;i<=3;i++) ans*=(a-i+1);

    return ans/6;
}
int main()
{
       int n;scanf("%d",&n);
       for(int i=0;i<n;i++){
          scanf("%d %d",&p[i].x,&p[i].y);
          p[i].x+=100000; p[i].y+=100000;
          p[i].m=p[i].x*1.0/p[i].y;
       }
       int ans=0;
       sort(p,p+n,cmp);
       ans=nC3(n);
       for(int i=0;i<n;i++){
          int j=0;
          while(i+j<n &&  fabs(p[i].m-p[i+j].m)<1e-9 ) j++;
          ans-=nC3(j);
          i+=j-1;
       }
       cout<<ans<<endl;
    return 0;
}
