    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
                int n;cin>>n;
                if(! (n%4))
                    cout<<"No";
                else
                    cout<<"Yes";
                if(t!=0)
                    cout<<endl;
        }

    return 0;
    }
