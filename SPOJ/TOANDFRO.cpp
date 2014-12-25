#include<bits/stdc++.h>
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    int c=1;
    cin>>c;
    while(c)
    {
        string s,rev="";
        cin>>s;
        int r = s.length()/c ,pos=0;
        string mat[r];
        int dir=1;
        FOR(0,s.length(),1)
        {
            if(i%c==0 && i)
            {
                if(dir==-1)
                    reverse(rev.begin(),rev.end());
           //     cout<<"--"<<rev<<endl;
                mat[pos++]=rev;
                rev = "";
                dir *= -1;
            }
            rev += s[i];
        }
          if(dir==-1)
                    reverse(rev.begin(),rev.end());
         //  cout<<"--"<<rev<<endl;
           mat[pos++]=rev;
           rev = "";
           dir *= -1;

        FOR(0,c,1)
        {
            for(int j=0;j<r;j++)
                cout<<mat[j][i];
        }
        cout<<endl;
        cin>>c;
    }

    return 0;
}
