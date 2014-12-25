#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long ans;
void merge(int *arr,int l,int mid,int r)
{
  int tmp[r-l+1],i=0,posr=mid+1,posl=l;
  while(posl<=mid && posr<=r )
    {
      if(arr[posl]<arr[posr])
	{
	  tmp[i]=arr[posl];
	  posl++;
	}
      else
	{
	  tmp[i]=arr[posr];
	  ans+=(mid-posl+1 );
	  //cout<<"~"<<tmp[i]<<"~";
	  posr++;
	}
      i++;
    }
  while(posl<=mid)
   tmp[i++]=arr[posl++];
  while(posr<=r)
    tmp[i++]=arr[posr++];

  for(int j=0;j<i;j++)
      {
          arr[l+j]=tmp[j];
   //         cout<<arr[l+j]<<"=>";
      }
 //     cout<<endl<<"ans="<<ans<<endl;
}

void mergesort(int *arr,int l,int r)
{
  int mid= (l+r)/2;
   if(l<r)
    {
      mergesort(arr,l,mid);
      mergesort(arr,mid+1,r);
      merge(arr,l,mid,r);
    }
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        string c;
        getline(cin,c);

        int n;
        cin>>n;
        ans=0;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        mergesort(arr,1,n);
        cout<<ans<<endl;
   }

return 0;
}
