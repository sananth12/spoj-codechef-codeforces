#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s!="00e0")
    {
        ll n= (s[0]-'0')*10ll + (s[1]-'0');
        ll e=  pow(10,(s[3]-'0'));
        n = n*e;
        ll ans= n-pow(2,(ll)log2(n));
        cout<< (2*ans+1)<<endl;
        cin>>s;
    }
return 0;
}
