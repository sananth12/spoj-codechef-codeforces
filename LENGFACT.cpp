#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    ll a;
    while(t--)
    {
        cin>>a;
        if(a==0||a==1||a==2)
            printf("1\n");
        else
            printf("%lld\n",(ll)floor((log(2*acos(-1)*a)/2+a*(log(a)-1))/log(10))+1);
    }
    return 0;
}
