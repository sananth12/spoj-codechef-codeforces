    #include <bits/stdc++.h>
    #define MOD 1000000007
    #define ll long long
    using namespace std;
    long long MAXX=1e18,table[1000001][60];
    inline int fastinput()
    {
    	int inp=0;char c=0;
            c=getchar_unlocked();
    	while(c>='0'&&c<='9')
    	{
    		inp=inp*10+c-'0';
    		c=getchar_unlocked();
    	}
    	return inp;
    }
    int main()
    {
        ll tmp,i,j,t,n,q,x,ans,p=0,l,mid,r;
        for(i=2;i<=1000000;i++)
        {
            j=1;
            tmp=i;
            while(1)
            {
                table[i][j]=tmp;
                j++;
                if(tmp>MAXX/i)
                    break;
                else
                    tmp = tmp*i;
            }
            j=1;
        }
        scanf("%lld",&t);
        while(t--)
        {
            scanf("%lld%lld",&n,&q);
            p =0;
            ll a[n+1];
            for(i=1;i<=n;i++)
                scanf("%lld",&a[i]);

            if(n>=60)
            {
                for(int i=60;i<=n;i++)
                p = (p + a[i])%MOD;
            }
            for(int Q=0;Q<q;Q++)
            {
                scanf("%lld",&x);
                ans =((x%MOD)*((a[1]+MOD)%MOD))%MOD;
                if(n>1)
                    ans = (ans%MOD + (((ll)sqrt(x)%MOD)*((a[2] + MOD)%MOD))%MOD)%MOD;
                if(n>2)
                    ans= (ans%MOD + (((ll)cbrt(x)%MOD)*((a[3] + MOD)%MOD))%MOD)%MOD;
               for(int i=4;i<=n && i<60;i++)
                {
                    l=2;
                    r=1000000;
                    while(l<=r)
                    {
                        mid = (l+r)/2;
                        if(table[mid][i]==0||table[mid][i]>x)
                                r=mid-1;
                        else
                                l=mid+1;
                    }
                ans = (ans%MOD + (((a[i]+MOD)%MOD) * (r%MOD))%MOD)%MOD;
                }
               if(n>=60)
                 ans=(ans%MOD + ((p+MOD)%MOD))%MOD;
               printf("%lld ",ans);
            }
            cout<<endl;
        }
        return 0;
    }
