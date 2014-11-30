    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            string s,d;
            cin>>s;
            d=s;
            next_permutation(s.begin(),s.end());
            if(s==d || s<d)
                cout<<"no answer\n";
            else
            cout<<s<<endl;
        }
    return 0;
    }
