#include<stdio.h>
int main()
{
    char a[1010],b[1010];
   while( scanf("%s\n%s",a,b) != EOF )
   {
       char x[280]={0},y[280]={0},ans[2100]={""};
       int i;
      for(i=0;i<strlen(a);i++)
          x[(int)a[i]]++;
      for(i=0;i<strlen(b);i++)
          y[(int)b[i]]++;
      int j=0;
      for(i=96;i<=125;i++)
      {
          if(x[i]>0 && y[i]>0)
          {
                  int k=x[i]<y[i]?x[i]:y[i];
                  while(k--)
                  {
                   ans[j]=(char)(i);
                   j++;
                  }

          }
      }
      printf("%s\n",ans);
   }
return 0;
}
