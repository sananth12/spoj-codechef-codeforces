#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int i,n,ans=0;
    string s;
    getline(cin,s);
    int M[200]={0};
    for(i=1;i<s.length()-1;i+=3)
    {
        if(M[s[i]]==0)
            ans++;
        M[s[i]]++;
    }
    cout<<ans;

return 0;
}
