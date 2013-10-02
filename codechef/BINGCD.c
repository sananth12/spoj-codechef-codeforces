#include<stdio.h>
#define s(x) scanf("%lld",&x)
int main()
{long long t,n,m,q,ans;s(t);while(t--){m=0,q,ans=0;s(n);while(pow(2,m-1)<=n){q=pow(2,m);if((2*n/q)%2!=0&&2*n%q==0)ans=q;m++;}printf("%lld\n",ans);}return 0;}
