#include<stdio.h>
#include<math.h>
int a(int x,int y)
{
    return(x+y);
}
int main()
{
  char s[10005],o;
  scanf("%s",s);
  int i=0,h=1,z=i,c,j;
  l:
  {
   if(s[i]!=s[a(i,h)])
   {printf("%c",s[i]);i=a(i,h);}
   else
   {
      c=z,j=i;
       o=s[i];
      w:
      {c=a(c,h);j=a(j,h);}
        if(s[j]==o)
            goto w;
       printf("%c%d",s[i],c);
      i=a(i,c);
   }

  }
  if(i<strlen(s))
    goto l;
return z;
}
