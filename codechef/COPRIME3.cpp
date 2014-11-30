#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b)
{
    int t,x=a,y=b;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}
bool RelativelyPrime (int a, int b) { // Assumes a, b > 0
  for ( ; ; ) {
    if (!(a %= b)) return b == 1 ;
    if (!(b %= a)) return a == 1 ;
  }
}
int main()
{
   int n;
   cin>>n;
   int k,j,arr[n],i;
   for(i=0;i<n;i++)
    cin>>arr[i];
    int ans=0;
   for(i=0;i<n-2;i++)
        for(j=i+1;j<n-1;j++)
            for(k=j+1;k<n;k++)
                {
                    if(RelativelyPrime(arr[i],arr[j]) || RelativelyPrime(arr[i],arr[k]) || RelativelyPrime(arr[j],arr[k]))
                        ans++;
                }
    cout<<ans;
return 0;
}
