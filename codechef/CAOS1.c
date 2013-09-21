#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
     int i,j,r,k,c,counter=0;
     char a[50][50];
     scanf("%d%d",&r,&c);
     for(i=0;i<r;i++)
     {
         scanf("%s",&a[i]);
     }
     for(i=1;i<r-1;i++)
     {
         for(j=1;j<c-1;j++)
         {
            if(a[i][j]!='#')
             {
                 if(a[i+1][j]=='#' || a[i][j+1]=='#' || a[i-1][j]=='#' || a[i][j-1]=='#')
                 {

                 }
                 else
                 {

                 int l=0,R=0,t=0,b=0;
                 for(k=j-1;k>=0;k--)
                 {
                     if(a[i][k]=='^')
                     t++;
                     else
                     break;
                 }
                 for(k=i-1;k>=0;k--)
                 {
                     if(a[k][j]=='^')
                     l++;
                     else
                     break;
                 }
                 for(k=j+1;k<c;k++)
                 {
                     if(a[i][k]=='^')
                     b++;
                     else
                     break;
                 }
                 for(k=i+1;k<r;k++)
                 {
                     if(a[k][j]=='^')
                     R++;
                     else
                     break;
                 }
                 int min=(((l<R)?l:R)<t?((l<R)?l:R):t)<b?(((l<R)?l:R)<t?((l<R)?l:R):t):b;
                 //printf("r=%d l=%d t=%d b=%d i=%d j=%d min=%d\n",R,l,t,b,i,j,min);
                 if(min>=2)
                 counter++;
             }
             }
         }
     }
     printf("%d\n",counter);
   }
return 0;
}
