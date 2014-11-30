    #include <bits/stdc++.h>
    using namespace std;
    #define MOD 1000000007
    int main() {
    // your code goes here
    static long long adj[1000001][60];
    //memset(adj,10000,sizeof(adj));
    unsigned long long temp;
    int j;
    for(int i=2;i<=1000000;i++)
    {
    j=1;
    temp = i;
    while(1)
    {
    adj[i][j]=temp;
    j++;
    if(temp>(long long)1e18/i)
    break;
    //cout<<temp<<endl;
    //cout<<i<<endl;
    temp = temp*i;
    }
    }
    int t,n,q;
    scanf("%d",&t);
    int a[10001];
    long long x,ans,preans=0;
    long long low,mid,up;
    while(t--)
    {
    scanf("%d%d",&n,&q);
    preans =0;
    for(int i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]<0)
        a[i] += MOD;
    }
    if(n>59)
    {
    for(int i=60;i<=n;i++)
    preans = (preans + a[i])%MOD;
    }
    while(q--)
    {
    //scanf("%lld",&x);
    cin>>x;
    if(n>0)
    ans =((x%MOD)*((a[1]+MOD)%MOD))%MOD;
        //cout<<ans<<endl;
                           if(n > 1)
                            ans = (ans%MOD + (((long long)sqrt(x)%MOD)*((a[2] + MOD)%MOD))%MOD)%MOD;

                           if(n > 2)
                           ans = (ans%MOD + (((long long)cbrt(x)%MOD)*((a[3] + MOD)%MOD))%MOD)%MOD;

    for(int i=4;i<=min(n,59);i++)
    {
    low=2;
    up=1000000;
   // cout<<i<<endl;
   // cout<<endl;
    while(low<=up)
    {

        mid = (low+up)/2;
        if(adj[mid][i]==0||adj[mid][i]>x)
                up=mid-1;
        else
                low=mid+1;
    }


        ans = (ans%MOD + (((a[i]+MOD)%MOD) * (up%MOD))%MOD)%MOD;
    }


    if(n>59)
        ans = (ans%MOD + ((preans+MOD)%MOD))%MOD;
    printf("%lld ",ans);
    }
    printf("\n");
    }

    return 0;
    }
