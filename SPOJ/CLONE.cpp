    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int i,n,l,x,y;
        cin>>n>>l;
        while(n!=0 && l!=0)
        {
        map <string,int> M;
        map <string,int>::iterator it;
        int ans[20009]={0};
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            M[s]++;
        }

        for(it=M.begin();it!=M.end();++it)
        {
            ans[it->second]++;
        }

        for(i=1;i<=n;i++)
            cout<<ans[i]<<endl;

          cin>>n>>l;
        }
    return 0;
    }
