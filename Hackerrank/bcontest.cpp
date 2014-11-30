    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t=1;
        //scanf("%d",&t);
        while(t--)
        {
            int n;
            cin>>n;
            int a[n+1],i,s[n+1];

            for(i=0;i<n;i++)
            {
                cin>>a[i];
                int cnt=0;
                while(a[i])
                {
                    if(a[i]&1)
                        cnt++;
                    a[i]=a[i]>>1;
                  //  cout<<"ads";
                }

                s[i]=cnt;
            }
            int ans=s[0];
            for(i=1;i<n;i++)
                {
                    ans=ans^s[i];
                   // cout<<"#";
                }
           // cout<<"*";
            if(ans==0)
                cout<<"The other player :(\n";
            else
                cout<<"Shaka :)\n";
        }
    return 0;
    }
