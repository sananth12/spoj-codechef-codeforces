#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m,k,kount[100]={0},max,pos,total=0;
    char N[100][100]={0};
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&k);
        int i,j;
        for(i=0;i<n;i++)
        { 
             scanf("%s",&N[i]); 
             kount[i]=0;          
        }
        for(i=0;i<n;i++)
        { 
             for(j=0;j<m;j++)
             if(N[i][j]=='.')
             kount[i]++;           
        } 
         
        while(k--)
        {
            max=kount[0];
            pos=0; 
            for(i=1;i<n;i++)
               if(kount[i]>max)
               {
                               pos=i;
                               max=kount[i];
               }
               
               kount[pos]=(m)-max;  
                   
        }
        
        total=0;
        for(i=0;i<n;i++)
        total+=(m-kount[i]);
        
        printf("%d\n",total);
    }  
return 0;    
}
