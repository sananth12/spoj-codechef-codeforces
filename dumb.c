#include<stdio.h>
#include<string.h>
int main()
{
  char s[10005];
  scanf("%s",s);
  int i=0,c=i,k=1,z=i;
  p:

   if(s[i]!=s[i+k]&&c==z)
   {printf("%c",s[i]);i+=k;}

   if(s[i]!=s[i+k]&&c!=z)
   {
       printf("%d",c);
       c=z;
       i++;
   }
   else
   {    if(c==z)
     { printf("%c",s[i]); c+=k;}

        c+=k;
      i+=k;
   }
  if(i<strlen(s))
    goto p;
return z;
}
