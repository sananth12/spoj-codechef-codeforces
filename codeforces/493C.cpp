#include<bits/stdc++.h>
#define ll long long
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    ll n,m;
    cin>>n;
    ll a[n];
    FOR(0,n,1)
        cin>>a[i];
    cin>>m;
    ll b[m];
    FOR(0,m,1)
        cin>>b[i];
    ll i,j,pos1=0,pos2=0, aa=0,bb=0,diff=0;
    j=0;
    for(i=0;i<n;i++)
    {
        ll x=a[i];
        while(a[i+1]==a[i] && i<n)
            i++;
        while(b[j]<x && j<m)
            j++;

        ll tmp = (i*2 + (n-i)*3) - (j*2 + (m-j)*3);
        cout<<tmp<<"~";
        if(tmp>diff)
        {
           aa =  (i*2 + (n-i)*3);
           bb =  (j*2 + (m-j)*3);
        }
        if(tmp == diff && (i*2 + (n-i)*3)>aa)
        {
           aa =  (i*2 + (n-i)*3);
           bb =  (j*2 + (m-j)*3);
        }
    }
    j=0;
    cout<<diff<< "    ";
    for(i=0;i<m;i++)
    {
         ll x = b[i];
         while(b[i+1]==b[i] && i<m)
            i++;
         while(a[j]<x && j<n)
            j++;
         ll tmp = (j*2 + (n-j)*3) + (i*2 + (m-i)*3);
        cout<<tmp<<"~--";
         if(tmp > diff || (tmp==diff && (j*2 + (n-j)*3)>aa ))
         {
             aa = (j*2 + (n-j)*3);
             bb =  (i*2 + (m-i)*3);
         }
    }
    if( (n*3 - m*3) >=diff)
    {
        aa = n*3;
        bb = m*3;
    }
    cout<<aa<<":"<<bb;
    return 0;
}
