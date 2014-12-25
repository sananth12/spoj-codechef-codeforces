    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            string b,s;
            cin>>b>>s;
            int ans=0,i,x[200]={0},y[200]={0};
            for(i=0;i<b.length();i++)
                x[b[i]]++;
            for(i=0;i<s.length();i++)
                if(x[s[i]]!=0)
                    {
                        ans++;
                        x[s[i]]=0;
                    }
            cout<<ans<<endl;
        }
    return 0;
    }
