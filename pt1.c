#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,i,flag=0;
      scanf("%f",&a);
      for(i=3;i<=360;i++)
      {
         if(a==(180*(i-2))/i)
         {
            printf("YES\n");
            flag++;
            i=500;
         }
      }
      if(flag==0)
         printf("NO\n");
    }
return 0;
}
