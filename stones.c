#include<stdio.h>
int main()
{
    int t;    
    char s[200]={0},j[200]={0};
    scanf("%d",&t);
    while(t--)
    {
          scanf("%s%s",&j,&s);
          
          int i,k,count=0;
          for(i=0;s[i]!=0;i++)
          {
              for(k=0;j[k]!=0;k++)
              if(j[k]==s[i])
              {
                            count++;                    
                           break;
              }
          }  
        printf("%d\n",count);    
    }    
return 0;    
}
