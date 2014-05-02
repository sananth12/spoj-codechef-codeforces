#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
  int t;
  cin>>t;
  multimap<int,int>::iterator it;
  while(t--)
    {
      multimap<int,int> M;
      int n,k,s,smap[2001]={0};
      cin>>n>>k>>s;
      int arr[n],i,total=0;
      for(i=0;i<n;i++)
	{
	  
	  cin>>arr[i];
	  total+=arr[i];
	  smap[arr[i]]++;
	  M.insert(pair<int,int>(arr[i],i+1));
	}
      sort(arr,arr+n);
      int sum[n];
      sum[0]=arr[0];
      /*for(i=1;i<k;i++)
	{
	  sum[i]=arr[i]+sum[i-1];
	  }*/
      if(s>total)
	{
	  for(i=n-1;i>=0;i--)
	    {
	      it=M.find(arr[i]);
	      cout<<(*it).second<<" ";
	      M.erase(it);
	    }
	}
      else
	for(i=0;i<n;i++)
	  {
	    it=M.find(arr[i]);
	    cout<<(*it).second<<" ";
	    M.erase(it);
	  }
      
      cout<<endl;
    }

}
