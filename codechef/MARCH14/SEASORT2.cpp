#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[15000];
void reverse(int i,int j)
{
                    int start = i;
				   int end = j;
				  while(start < end)
				 {
					int temp = a[start];
					a[start] = a[end];
					a[end] = temp;
					start++;
					end--;
				}
}
int main()
{
   int k,n,i,j,swaps=0;
   cin>>n;
   int ans[10008][2],final[15000];
   for(i=0;i<n;i++)
   {
       cin>>k;
       a[i]=k;
       final[i]=k;
   }
   sort(final,final+n);
   for(i=0;i<n;i++)
   {
       if( a[i]!=final[i])
       {
          for(j=i+1;j<n;j++)
           {
             //  cout<<a[j]<<" "<<final[i]<<endl;
               if( a[j]==final[i])
               {
                   ans[swaps][0]=i+1,ans[swaps][1]=j+1;
                   swaps++;
                   reverse(i,j);

               break;
           }
       }
   }
   }
   cout<<swaps<<endl;
   for(i=0;i<swaps;i++)
    cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
return 0;
}
