    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t,i,n;
        cin>>n;
        queue <int> S;
        for(i=0;i<n;i++)
            {
                cin>>t;
                S.push(t);
            }
        string s;
        cin>>s;
        while(s!="-1")
        {
            for(i=0;i<s.length();i++)
            {
                cout<< (char)('a'+ (s[i]-'a' + S.front())%26);
                S.pop();
            }
            cout<<endl;
            cin>>s;
        }

    return 0;
    }
