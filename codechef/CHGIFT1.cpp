#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       long long sum=0,i,n,a[12];
       cin>>n;
       cin>>sum;
       for(i=1;i<n;i++)
       {cin>>a[i];
        if(sum==0)
        {
            if(a[i]<0)
            sum=a[i];
            else
            sum-=a[i];
        }
        else if(sum>0)
        {
            if(a[i]<0)
            {
                if(sum*a[i]<sum+a[i])
                sum*=a[i];
                else
                sum+=a[i];
            }
            else
            {
                sum-=a[i];
            }
        }
        else if(sum<0)
        {
            if(a[i]>0)
            {
                if(sum*a[i]<sum-a[i])
                sum*=a[i];
                else
                sum-=a[i];
            }
            else
            sum+=a[i];
        }
        //cout<<sum<<"\n";
       }
        cout<<sum<<"\n";
   }
return 0;
}
