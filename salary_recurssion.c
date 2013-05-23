#include<stdio.h>

int main()
{
    int t,n[102],m,i,j,k;
    scanf("%d",&t);
    
    while(t--)
    {
         int count=0;
         scanf("%d",&m);
         
         for(k=0;k<m;k++)
             scanf("%d",&n[k]);
             
         int flag=1,big=n[m-1],pos=m-1;
         while(flag)   
         {
             flag=0;
             for(i=0;i<m;i++)
             {   if(n[i]>big)           
                   { 
                                        big=n[i];    
                                        pos=i;
                                        flag++;
                    }
                   else if(n[i]<big)
                    flag++;
             }
               if(flag)                     
               {  count++;
               for(j=0;j<m;j++)
               {
                      if(j!=pos)
                      n[j]++;
               }                                 
               }
         }  
              printf("%d\n",count);
    }
    
    return 0;
}
