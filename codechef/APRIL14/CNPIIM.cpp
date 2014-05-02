#include<stdio.h>
#include<iostream>
#include<vector>
#include<cmath>
typedef long long ll;
using namespace std;
int  calc(int n)
{
    int ans=0,u=sqrt(n);
    for(int i=1;i<=u;i++)
    ans+=(n/i) ;

    ans=2*ans - u*u ;
     return ans;
}
int main()
{
   int t,arr[2503]={0},i,j,k;
   scanf("%d",&t);
   while(t--)
   {
        long long n,sol=0;
        cin>>n;
        for(i=1;i<n;i++)
        {

            sol+= calc(i*(n-i)-1);
        }
        cout<<sol<<endl;
   }

return 0;
}
