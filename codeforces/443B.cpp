#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(char *s,int l,int r)
{
    int i,ans=0;

    for(i=l-1; (r-l+1)/2+i<r ; i++)
    {
        if(s[i]==s[i+(r-l+1)/2])
            ans++;
        else
        {
            //if(l==1 && r==6)
               // cout<<s[i]<<" "<<s[i+(r-l+1)/2]<<"*";
            return 0;
        }
    }

    return (r-l+1);
}
int main()
{
    char s[500];
    int i,k;
    cin>>s;
    cin>>k;
    int l=strlen(s),ans=0;
    if(k<l-1)
    for(i=(l+k);i>l;i--)
    {
        s[i-1]=s[i-((l+k)/2)-1];
    }
    else if(k==l-1)
    {
        cout<<k+l-1;
        return 0;
    }
    else
    {
        cout<<(l+k)-((l+k)&1);
        return 0;
    }

    for(i=0;i<l+k;i++)
        for(int j=i+1;j<l+k;j++)
            ans=max(ans,solve(s,i+1,j+1));
    if(ans==0)
        cout<<k*2;
    else
    cout<<ans;
return 0;
}
