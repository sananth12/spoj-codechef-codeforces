#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long long i,cnt,t,n,x;
   cin>>t;
   while(t--)
   {
        cnt=0;
        long long two=0;
        cin>>n;
        for(i=0;i<n;i++)
            {
                cin>>x;
                if(x>1)
                    cnt++;
                if(x==2)
                    two++;
            }
        long long sub=(two*(two-1) )/2;
        cout<<(((cnt-1)*cnt)/2)-sub<<endl;
   }

return 0;
}
