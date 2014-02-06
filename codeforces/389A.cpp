#include<stdio.h>
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}
int main()
{
   int i,t,data[105];
  cin>>t;
   for(i=0;i<t;i++)
   {
        cin>>data[i];

   }

int ans=data[0];
for(i=1;i<t;i++)
{
    ans = gcd(ans,data[i]);

}

cout<<ans*t;
return 0;
}
