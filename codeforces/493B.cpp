#include<bits/stdc++.h>
#define ll long long
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    int n,p,f=0;
    vector<int> a,b;
    cin>>n;
    ll aa=0,bb=0;
    while(n--)
    {
        cin>>p;
        if(p>0)
            {
                aa+=p;
                f=1;
                a.push_back(p);
      //          cout<<a<<endl;
            }
        else
            {
                f=-1;
                p *=-1;
                bb+=p;
                b.push_back(p);
            }
    }
    int i=0,la=a.size(),lb=b.size();
    bool ans=true,tie=true;
    while(i<la && i<lb)
    {
        if(a[i]>b[i])
        {
            tie=false;
            break;
        }
        else if(a[i] <b[i])
        {
            tie=false;
            ans=false;
            break;
        }
        i++;
    //    cout<<i<<"--";
    }
    if(tie)
    {
        if(la<lb)
            ans=false;
        else if(la>lb)
            ans=true;
        else
        {
            if(f==-1)
                ans=false;
        }
        //cout<<"tir";
    }
    if(aa>bb)
        ans=true;
    else if(bb>aa)
        ans=false;

    if(!ans)
        cout<<"second";
    else
        cout<<"first";

    return 0;
}
