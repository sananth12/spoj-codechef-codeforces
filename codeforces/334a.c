#include<stdio.h>

int main()
{
   int t,count=0;
   char s[2],a[2];
   scanf("%d",&t);
   scanf("%s",a);
   s[0]=a[0];
   s[1]=a[1];
   t--;
   while(t--)
   {
        scanf("%s",a);
        if(a[0]!=s[0])
        {
            s[0]=a[0];
            count++;
        }
   }
   printf("%d\n",count);
return 0;
}
