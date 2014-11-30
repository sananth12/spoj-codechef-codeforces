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
            stack <char >S;
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                if(isalpha(s[i]))
                    cout<<s[i];
                else if(s[i]!=')')
                    S.push(s[i]);
                else
                {
                    while(S.top()!='(')
                     {
                         cout<<S.top();
                        S.pop();
                     }
                     S.pop();
                }
            }
            while(S.size()!=0)
            {
                cout<<S.top();
                S.pop();
            }
            cout<<endl;
        }
    return 0;
    }
