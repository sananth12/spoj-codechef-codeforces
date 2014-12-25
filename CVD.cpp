    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    char s[500][500]; int n;
    void Fill(int i,int j)
    {

        if(s[i][j]=='O' && i<n && j<n)
        {
            s[i][j]='X';

            if(s[i+1][j]=='O' ){
            Fill(i+1,j);
            s[i+1][j]='X';
            }

            if(s[i][j+1]=='O'){

            Fill(i,j+1);
            s[i][j+1]='X';
            }

            if(s[i-1][j]=='O'){

            Fill(i-1,j);
            s[i-1][j]='X';
            }

            if(s[i][j-1]=='O'){

            Fill(i,j-1);
            s[i][j-1]='X';
            }
        }

    }
    int main()
    {
        int i,j,ans=0;
        cin>>n;

        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>s[i][j];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(s[i][j]=='O')
                {
                    ans++;
                    Fill(i,j);
                }
            }

        cout<<ans;
    return 0;
    }
