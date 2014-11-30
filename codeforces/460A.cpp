    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {

        int n,m;
        cin>>n>>m;
        int day=0,sok=n;
        while(sok)
        {
            sok--;
            day++;
            if(day%m==0)
                sok++;
        }
        cout<<day;
    return 0;
    }
