#include<bits/stdc++.h> 
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      ll n,k,sum;
      cin>>n>>k;
      ll a[k];
 FOR(i,0,k)
	cin>>a[i];
      if(k==0)
	{
	  if(((n*(n+1))/2)%2)
	    cout<<"Mom\n";
	  else
	    cout<<"Chef\n";
	}
      else
	{
		     
	  sort(a,a+k);
	  ll i,carry=0,miss=0;
 	  for(i=0;i<k;i++)
	    {
	      sum = ((a[i]-1)*a[i])/2 - carry;
	      if(sum < a[i])
		break;
				miss = a[i];
	      carry += a[i];	      
	    }
	  if(miss==0)
	    miss = a[0]-1;
	  if(i<k)
	    {
	      //	      cout<<"1##\n";
	      if(miss%2)
		cout<<"Mom\n";
	      else
		cout<<"Chef\n";
	    }
	  else
	    {
	      sum = (a[k-1]*(1+a[k-1]))/2 - carry;
	      if(sum < a[k-1]+1)
		{
		  //  cout<<"2##\n";
		  if(a[k-1]%2)
		    cout<<"Mom\n";
		  else
		    cout<<"Chef\n";
		}
	      else
		{
		  //cout<<"3##\n";
		  if( ((n*(n+1))/2 - carry )%2 )
		    cout<<"Mom\n";
		  else
		    cout<<"Chef\n";
		}
	    }
	}
    }
  return 0;
}
