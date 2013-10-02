#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
         int i,j,n,k,ans,N[1005];
         string  s;
         scanf("%d%d%d",&n,&k,&ans);
         for(i=0;i<n;i++)
         scanf("%d",&N[i]);

         cin>>s;

         for(i=0;i<k;i++)
         {
             for(j=0;j<n;j++)
             {
                 if(s=="AND")
                 ans=ans&N[j];
                 if(s=="OR")
                 ans=ans|N[j];
                 if(s=="XOR")
                 ans=ans^N[j];
             }
         }
         printf("%d\n",ans);
   }


return 0;
}
