#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      long long n,m;
      cin>>n>>m;
      int i,size=0,j,flag=0;
      long long arr[n];
      for(i=0;i<n;i++)
	  cin>>arr[i];
	
      sort(arr,arr+n);
      for(i=n-1;i>=0;i--)
	{
	  m-=arr[i];
	  if(m<=0)
	    {cout<<n-i<<endl;break;}
	}
      if(i<0)
	cout<<-1<<endl;
    }
  return 0;
}
