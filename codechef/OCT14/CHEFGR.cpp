#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<n;i++)
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      int n,m;
      cin>>n>>m;
      int i,a[n],ref=0;
      FOR(i,0,n)
        {
            cin>>a[i];
            ref = max(ref,a[i]);
        }
      int ans=0,flag=0;
      FOR(i,0,n){
        ans += ref - a[i];
      }
      if(ans>m)
        flag =0;
      else if(ans==m)
        flag=1;
      else
      {
          if( (ans-m)%n==0)
            flag=1;
          else
            flag=0;
      }
      if(flag)cout<<"Yes\n";
      else
      cout<<"No\n";
    }
  return 0;
}
