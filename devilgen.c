#include<stdio.h>
int main()
{
    int t,coun=0;
    int i=0;
          for(i=13;i<=33335;i+=2)
          { int flag=0;
          int j=i;
              while(j>0 && flag==0)
              {
                 int r=j%10;
                 if(r!=1 && r!=3)
                   flag=1;
                j=j/10;
              }
              if(flag==0)
                {printf("%d,",i);
                coun++;
                }
          }
   printf("\n\n%d",coun);
return 0;
}
