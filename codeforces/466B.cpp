    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll n,a,b;
        if(n*6 <= b*a)
        {
            cout<<b*a<<endl<<a<<" "<<b;
        }
        else
        {
            ll ta=n*6,aa=a,bb=b;
            if( (n*6)/bb >=a)
                {
                    aa= (n*6)/bb;
                    if( (aa*bb)%ta !=0)
                    {

                    }
                }

        }
    return 0;
    }
