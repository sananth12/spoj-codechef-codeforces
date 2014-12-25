    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;

        if(a*m <= b)
        {
            cout<<n*a;
        }
        else
        {
            int ans1= ( (n/m)*b + (n%m)*a );
            int ans2= ( (n/m)*b + ((n%m==0)?0:b)) ;
            cout<<min(ans1,ans2);
        }

  //  cin>>n;
    return 0;
    }
