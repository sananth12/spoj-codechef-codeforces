#include<bits/stdc++.h>
#define ll long long
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    int n;
    string home,away;
    int t,h[105]={0},a[105]={0},no,hh[105]={0},aa[105]={0};
    char team,c;
    cin>>home>>away;
    cin>>n;
    while(n--)
    {
        cin>>t>>team>>no>>c;
        if(team == 'h')
        {
            if(c=='r')
                h[no]=2;
            else
                h[no]++;

            if(h[no]>=2 && hh[no]==0)
                {
                    cout<<home<<" "<<no<<" "<<t<<endl;
                    hh[no]++;
                }
        }
        else
        {

            if(c=='r')
                a[no]=2;
            else
                a[no]++;

            if(a[no]>=2 && aa[no]==0)
               {
                   aa[no]++;
                   cout<<away<<" "<<no<<" "<<t<<endl;
               }
        }
    }
    return 0;
}
