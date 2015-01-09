#include<bits/stdc++.h>
using namespace std;
int a[100000],n,m;

int compare(const void *x,const void *y)
{
  return *(int *)x-*(int *)y;
}

bool find(int v)
{
  int p=a[0],c=0;
  
  for(int i=1;i<n;i++)
  {
    if(a[i]-p>=v)
    {
      c++;
      p=a[i];
    }
  }
  if(c>=m)
    return true;
  return false;
}

int main(){
  int t;
  cin>>t;
  while(t--)
    {
      cin>>n>>m;
      m--;
      
      for(int i=0;i<n;i++) 
	cin>>a[i];
      
      qsort(a,n,sizeof(int),compare);
      
      int left=0,right=a[n-1],mid;
      
      while(left<=right)
      {
	mid=(left+right)/2;
	if(find(mid))
	  left=mid+1;
	else 
	  right=mid-1;
      }
      cout<<left-1<<endl;
    }
  return 0;
}
