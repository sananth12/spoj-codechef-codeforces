#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int m[100][100]={0},trap,size,i,j,mini=1000000,i1,j1;
    scanf("%d %d",&size,&trap);
    for(i=0;i<size;i++)
       for(j=0;j<size;j++)
           scanf("%d",&m[i][j]);
    for(i=0;i<size;i+=trap)
    {
         for(j=0;j<size;j+=trap)
         {    mini=1000000;
             for(i1=0;i1<(i+trap);i1++)
             {
                 for(j1=0;j1<(j+trap);j1++)
                 {
                     if(m[i1][j1]<=mini)
                        mini=m[i1][j1];
                 }

             }
             printf("%d ",mini);
         }
         printf("\n");
    }
    }
return 0;
}
