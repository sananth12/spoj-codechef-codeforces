#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int i,j,n,m,k;
        char c[]={'G','C','A','T'};
        cin>>n>>m>>k;
        int w=1,A=n*m,T=n*m;
        w=k/(A);
        w-=3;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
            {
                if(w--)
                    cout<<c[1];
                else
                cout<<c[0];
            }
        cout<<endl;
        }
   }

return 0;
}
