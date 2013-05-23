#include<stdio.h>
int main()
{   
    int t;
    char s[315];
    int y=1;
    scanf("%d",&t);
    t++;
    while(t--)
    { 
       
       int a[150]={0};
       fgets(s,sizeof(s),stdin);
       int i;
       for(i=0;i<strlen(s);i++)
       {
              a[(int)s[i]]++;
              if((int)s[i]>=97)
              {
                  a[65+(int)s[i]-97]++;
              }                     
       }
       int flag=0;
       if(y==1)
       {}
       else
       {
       for(i=65;i<=90;i++)
       if(a[i]==0)
       {
                  printf("%c",i);
                  flag++;
       }
       if(!flag && a[32]==0)
       {
                printf(" ");
                flag++;
       } 
       if(!flag)
       printf("~");
       
       printf("\n");
       }
       y++;   
    }
   return 0;
}
