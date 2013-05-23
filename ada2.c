#include<stdio.h>
int a(int x,int y)
{
    return(x+y);
}
int main()
{
   char s[10005];
   int y=1,g=0,i;
   scanf("%s",&s);

    i=y;
    printf("%c",s[g]);

   f:
   {
     if(s[i-y]<=s[i]||s[a(i,y)]<=s[i])
     printf("%c",s[i]);

     i=a(i,y);
   }
   if(i<strlen(s))
    goto f;

return g;
}
