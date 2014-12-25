#include<bits/stdc++.h>
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;
int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        long long n,x;
        cin>>n;
        x = sqrt(n);
        cout<<"Case "<<t<<": ";
        if( n >= (x+1)*(x+1)-1 )
            cout<<x;
        else
            cout<<x-1;
        cout<<endl;
    }
    return 0;
}
