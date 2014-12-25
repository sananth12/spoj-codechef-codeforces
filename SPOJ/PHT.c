#include<bits/stdc++.h>
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t)
    {
        long long n,x;
        cin>>n;
        x = sqrt(n);

        if( n> (x*x + 2*x))
            cout<<x;
        else
            cout<<x-1;
        cout<<endl;
    }
    return 0;
}
