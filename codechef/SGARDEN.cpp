#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
using namespace std;
int gcd(int a,int b)
{
    int rem;
    if(b==0)
    return a;
    if(a==0)
    return b;
    if(b>a)
    {
           a=a+b;
           b=a-b;
           a=a-b;
    }
    rem=a%b;
    while(rem>b)
    {
              a=b;
              b=rem;
              rem=a%b;
    }
              if(rem==0)
              return b;
              else
              return rem;
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int i,j,n,x,I;
        cin>>n;
        int a[n+1],ans[n+1];
        i=1;
        for(I=1;I<=n;I++,i++)
            {
                cin>>x;
                if(x!=i)
                    a[i]=x;
                else
                    i--;
            }
        n-i;
        for(i=1;i<=n;i++)
        {
            j=a[i];
            ll cnt=0;
            while(a[j]!=i)
            {
                cnt++;
                j=a[j];
            }
            ans[i]=cnt;
        }
        ll lcm=0;
        lcm=ans[2]*ans[1]/gcd(ans[1],ans[2]);
        for(i=3;i<n;i++)
            lcm=(lcm*ans[i]/gcd(lcm,ans[i]))%MOD;

        cout<<lcm<<endl;
   }
return 0;
}
