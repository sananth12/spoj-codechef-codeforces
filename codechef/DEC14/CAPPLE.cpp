#include<bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin>>t;
  while(t--)
    {
      int n;
      cin>>n;
      int cum[100005]={0},a[n],i,ans=0;
      for(i=0;i<n;i++)
	{
	  cin>>a[i];
	  if(cum[a[i]]==0)
	    ans++;
	  cum[a[i]]++;
	}
      cout<<ans<<endl;
    }

  return 0;
}
