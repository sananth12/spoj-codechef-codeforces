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
            int i;
            int ans[2000]={0},j;
            for(i=0;i<n;i++)
            {
                string s;
                cin>>s;
                int mask=0;
                for(int j=0;j<s.length();j++)
                {
                    mask = mask | (1<<(s[j]-'0'));
                }
                ans[mask]++;
                //cout<<mask<<" ";
            }
            ll x=0;
            for(i=0;i<1500;i++)
                for(j=0;j<1500;j++)
                    if( i&j && i^j)
                        x+= (ans[i]*ans[j]);
            for(i=0;i<1500;i++)
                x+= (ans[i]* (ans[i]-1));
            x/=2;

            cout<<x<<endl;
        }
    return 0;
    }
