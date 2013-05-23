#include<stdio.h>
#include<string.h>
int main()
{
  char s[10005];
  scanf("%s",s);
  int i=0,count=0;;
  while(i<strlen(s))
  {
   if(s[i]!=s[i+1]&&count==0)
   {printf("%c",s[i]);i++;}
   else if(s[i]!=s[i+1]&&count!=0)
   {
       printf("%d",count);
       count=0;
       i++;
   }
   else
   {    if(!count)
      printf("%c",s[i]);

      else
        count++;
      i++;
   }

  }
  getch();
return 0;
}
