
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int T=1;T<=t;T++)
    {
      cout<<"Scenario #"<<T<<" :";
      int i,sum=0,target,n,ans=0;
      cin>>target>>n;
      int a[n];
      for(i=0;i<n;i++)
	cin>>a[i];
      sort(a,a+n);
      for(i=n-1;i>=0;i--)
	{
	  if( sum<target)
	    {
	      sum+=a[i];
	      ans++;
	    }
	  else
	    break;
	}
      cout<<ans<<endl;
    }

  return 0;
}
