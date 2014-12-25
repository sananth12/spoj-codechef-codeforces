#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    string s,ans="";
    cin>>s;
    int i;
    ans=s[0];
    for(i=1;i<s.length();i++)
    {
        string tmp=s.substr(i,i);
        if(tmp<ans)
            ans=tmp;
    }
    if(ans!="a")
    {
        cout<<ans;
        return 0;
    }
    ans=s.substr(0,1);
    for(i=1;i<s.length()-1;i++)
    {
        if(s.substr(i,i+1)<ans)
            ans=s.substr(i,i+1);
    }
    if(ans<"aa")
    {
        cout<<ans;
        return 0;
    }
    ans=s.substr(0,2);
    for(i=1;i<s.length()-2;i++)
    {
        if(s.substr(i,i+2)<ans)
            ans=s.substr(i,i+2);
    }
    if(ans<"aaa")
    {
        cout<<ans;
        return 0;
    }
    ans=s.substr(0,3);
    for(i=1;i<s.length()-3;i++)
    {
        if(s.substr(i,i+3)<ans)
            ans=s.substr(i,i+3);
    }
    if(ans<"aaaa")
    {
        cout<<ans;
        return 0;
    }
   return 0;
}
