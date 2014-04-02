#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   int n,x,max;
   scanf("%d",&t);
   while(t--)
   {
        cin>>n;
        max=0;
        for(int i=0;i<n;i++)
            {
                cin>>x;
                if(x+i>=max)
                    max=x+i;
            }
        cout<<max<<endl;
   }

return 0;
}
