
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      long long i,n,k;
      cin>>n>>k;
      long long a[n],b[n],ans=0,big=0;
      for(i=0;i<n;i++)
	cin>>a[i];
      for(i=0;i<n;i++)
	cin>>b[i];

      for(i=0;i<n;i++)
	if( (k/a[i])*b[i] > big )
	  {
	    big = (k/a[i])*b[i];
	    ans=big;
	  }
      cout<<ans<<endl;
    }
}
