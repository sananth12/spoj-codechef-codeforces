#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007LL
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0)
    return a;
    if(b==1)
    return 1;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
	return ((a*b)/gcd(a,b));
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll n,a[100005],i,j,ans=1,tmp,cnt=0;
        bool visit[100005];
        cin>>n;

        for(i=1;i<=n;i++)
        {
            visit[i]=false;
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(!visit[i])
            {
                cnt++;
                tmp=1;
                j=a[i];
                visit[i]=true;
                while(!visit[j])
                {
                    tmp++;
                    visit[j]=true;
                    j=a[j];
                }
                ans = lcm(tmp,ans);
            }
        }
        ans = ans%MOD;
        cout<<ans<<endl;
   }

return 0;
}
