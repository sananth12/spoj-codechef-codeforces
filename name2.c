#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
           char a[25001],b[25001],temp[25001];
           scanf("%s%s",&a,&b);
           int la=strlen(a);
           int lb=strlen(b);

           if(la>lb)
           {
               strcpy(temp,a);
               strcpy(a,b);
               strcpy(b,temp);
               int to;
               to=la;
               la=lb;
               lb=to;
           }

         if(la==lb)
               {if(strcmp(a,b)==0)
                   printf("YES\n");
                else
                    printf("NO\n");}
          else
          {
              int i=0,j=0;
              while(j<lb && i<=la)
              {
                  if(a[i]==b[j])
                      i++;
                  j++;
              }
              if(i==(la))
                printf("YES\n");
              else
                printf("NO\n");

          }
    }
return 0;
}
