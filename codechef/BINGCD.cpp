#include<iostream>
#include<cmath>
using namespace std;int main(){long long m,n,q,ans=0,t;cin>>t;while(t--){m=0,cin>>n;while(pow(2,m-1)<=n){q=pow(2,m);if((2*n/q)%2!=0&&2*n%q==0)ans=q;m++;}cout<<ans<<"\n";}return 0;}
