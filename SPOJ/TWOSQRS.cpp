    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    ll isSquare(ll c)
    {
    ll a=0;
    ll b=sqrt(c);
    if(c%4==1)
    {
        while(a<=sqrt(c))
        {
            long long  pows=pow(a,2)+pow(b,2);

            if(pows==c )
            {
                printf("Yes\n");
                return 1;
            }
        }

    }
        else
        {
            printf( "No\n");
            return 0;
        }
        return 0;
    }

    int main()
    {
        long long n, t;
        cin>>t;
        while(t--)
        {
            cin>>n;
            isSquare(n);
        }
        return 0;
    }
