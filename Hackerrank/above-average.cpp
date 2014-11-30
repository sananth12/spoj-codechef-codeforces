    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n;
            cin>>n;
            int sum=0,i,a[n+1];

            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }

            int avg=sum/n,ans=0;
            for(i=0;i<n;i++)
            {
                if(a[i]>avg)
                    ans++;
            }
            cout<<ans<<endl;
        }
    return 0;
    }
