#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int i,n,m;
  cin>>n>>m;
  int a[100000][12]={0},ans[100000]={0};
  string s;
  cin>>s;
  for(i=0;i<n;i++)
    {

      int k=s[i]-'0';
      int B1=0,B2=0;
      if(i>0)
      for(int j=0;j<=9;j++)
      {
          a[i][j]+=a[i-1][j];
          if(j>k)
          {
              B2+= a[i-1][j] * (k-j);
          }
          else
          {
              B1+= a[i-1][j] * (k-j);
          }
      }
      ans[i]=B1-B2;
      a[i][k]=a[i-1][k]+1;
   }
  while(m--)
    {
      int pos;
      cin>>pos;
      cout<<ans[pos-1]<<endl;
    }

  return 0;
}
