#include<stdio.h>
int main()
{
    
    int m,n;    
    scanf("%d %d",&n,&m);
    int N=n,M=m;
    char name[1000][25],country[1000][25],vote[10000][20],alph[100];
    
    
    while(N--)    
    {
           scanf("%s %s",&name[N-1],&country[N-1]);       
    }
    while(M--)
    {
      scanf("%s",&vote[M-1]);
    }
    
    int i=0;j=0,counter=0,big=0,temp[20];
    for(i=0;i<n;i++)
    {   temp=country[1];
        counter=0;
        for(j=0;j<n;j++)
        {
           if(strcmp(temp,country)==0)
           counter++;
         }
    }
    
    
    
}
