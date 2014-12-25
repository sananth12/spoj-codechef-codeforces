#include<bits/stdc++.h>
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        bool flag=true;
        cin>>n;
        if(n%2)
        flag=false;
        if(flag)
            cout<<"Thankyou Shaktiman\n";
        else
            cout<<"Sorry Shaktiman\n";
    }
    return 0;
}
