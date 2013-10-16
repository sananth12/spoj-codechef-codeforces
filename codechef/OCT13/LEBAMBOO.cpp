#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int i,n,h[51],d[51],flag=1,counter=0,match=0;
       cin>>n;
       for(i=0;i<n;i++)
       cin>>h[i];
       for(i=0;i<n;i++)
       cin>>d[i];
       for(i=0;i<n;i++)
        {
           if(h[i]==d[i])
               match++;
        }
        if(match==n)
        printf("0\n");
        else{
       while(flag)
       {
           int pos=0,diff=h[0]-d[0];
           match=0;
           for(i=1;i<n;i++)
           {
               if(h[i]-d[i]>=diff)
               {
                   diff=h[i]-d[i];
                   pos=i;
               }
           }
           h[pos]--;
           for(i=0;i<n;i++)
           {
               if(i!=pos)
               {
                   h[i]++;
               }
               if(h[i]==d[i])
               match++;
           }
           counter++;
           if(counter>500 || match==n)
           {
               break;
               flag=0;
           }
       }
       if(match==n)
       printf("%d\n",counter);
       else
       printf("-1\n");
        }
   }

return 0;
}
