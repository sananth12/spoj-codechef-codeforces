#include<stdio.h>
int main()
{
    int n,s,i,j=0,c=0,a[10005]={0},b[10005]={0};
    scanf("%d%d",&n,&s);
   for(i=0;i<s;i++)
    {
       int t,dummy,g,falk=0;
       scanf("%d",&t);
        while(t--)
            {
              scanf("%d",&g);
              if(g==0)
                {a[j]=i;
                 j++;
                 }

            }
    }
       printf("%d\n",j);
        for(i=0;i<j;i++)
            printf("%d\n",a[i]);
return 0;
}
