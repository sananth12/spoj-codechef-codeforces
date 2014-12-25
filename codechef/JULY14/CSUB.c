#include<stdio.h>
#define ll long long
int main()
{
   int t,i;
   ll n,ans=0,ones=0;
   scanf("%d",&t);
   char s;
   while(t--)
   {
        ans=0;ones=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            {
                scanf(" %c",&s);
                if(s-'0')
                   {
                       ans+=ones+1;
                       ones++;
                   }
            }
       printf("%lld\n",ans);
   }
return 0;
}
