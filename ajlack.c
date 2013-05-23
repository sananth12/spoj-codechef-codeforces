#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 int t;
 char s[315]={'0'},c;
 int i,f=0;
  scanf("%d",&t);
  scanf("%c",&c);
   while(t--)
  {f=0;
     int e[130]={0};
    gets(s);
    
    int g=strlen(s); 
      while(g-->=0)
      e[(int)tolower(s[g])]++;
    
     for(i=97;i<123;i++)
    {
     if(e[i]==0&&f==0)
       {
       printf("%c",(char)i);
       f=1;    
       }
      }
    if(f==0)
    printf("~");  
    printf("\n");
   }
return 0;
}
