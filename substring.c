#include<stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      char a[100],ans[100];
      int n,present=0;
      scanf("%s",&a);
      scanf("%d",&n);

      while(n--)
      {

          int i,flag=0;
            char c[100];
          scanf("%s",&c);
          for(i=0;i<strlen(a);i++)
          {
              if(c[i]!=a[i])
               flag=1;
          }
          if(flag==0 && present==0)
          {
               strcpy(ans,c);
               present=1;
          }
        if(flag==0)
        {
            if(strcmp(ans,c)>=0 && strlen(ans)>strlen(c))
                strcpy(ans,c);
        }
      }
      if(present==0)
        printf("%s\n",a);
      else
      printf("%s\n",ans);
  }
return 0;
}
