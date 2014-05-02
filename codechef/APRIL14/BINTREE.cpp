#include<stdio.h>
#include<iostream>
#include<cmath>
#include<map>
using namespace std;

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int x,y,a,b;
      cin>>x>>y;
      a=x,b=y;
//      int l1=log(x)/log(2),l2=log(y);
      map < int,int> visit;
      map<int,int>::iterator it;
      int flag=1;
      while(flag)
      {
          if(x<1 && y<1)flag=0;

          if(x>=1)
          {

              it=visit.find(x);
              if(it!=visit.end())
              {
                  cout<<(((int)log2(a)-(int)log2(x))+((int)log2(b)-(int)log2(x)))<<endl;
                   break;
              }
              visit[x]=1;
              x=x/2;

          }
          if(y>=1)
          {

              it=visit.find(y);
              if(it!=visit.end())
              {
                   cout<<(((int)log2(a)-(int)log2(y))+((int)log2(b)-(int)log2(y)))<<endl;
                   //  cout<<l1+l2<<endl;
                    break;
              }
              visit[y]=1;
              y/=2;

          }
      }
   }

return 0;
}
