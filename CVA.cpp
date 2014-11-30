    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            string s;
            cin>>s;
            int i,a[30]={0},n=s.length();
            for(i=0;i<n;i++)
            {
                a[s[i]-'a']++;
            }
            int ans=0;
            //cout<<s[0]-'a'<<"*";
            for(i=0;i<27;i++)
                if(a[i])
                {
                   // cout<<a[i]<<" "<<i<<"     ";
                   ans+=abs(i+1 - a[i]);
                }

            t==0?cout<<ans:cout<<ans<<endl;
        }
    return 0;
    }
