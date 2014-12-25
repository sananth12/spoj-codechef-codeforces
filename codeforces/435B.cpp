#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   long long a,k,exp=0;
   cin>>a>>k;
   int arr[19],num[19];
   for(int i=1;(a/i)!=0;i*=10)
   {
       arr[exp]= (a/i)%10;
       num[exp]= (a/i)%10;
       exp++;
   }


   for(int i=exp-1;i>=0;i--)
    cout<<num[i];

return 0;
}
