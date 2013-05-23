#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int n,k;    
   scanf("%d %d",&n,&k); 
    char s[10];
    int tweet[10001]={0},pos=0;
    int i,count=0;
   while(k--)
    {
             scanf("%s %d",s,&pos);
             
             if(strcmp(s,"CLOSEALL")!=0)
             {
                                        tweet[pos]=(tweet[pos]==1)?0:1;
                                        
                                        if(tweet[pos])
                                        ++count;
                                        else
                                        --count;
             
                 printf("%d\n",count);
             }
             
             else
               {  
                       for(i=1;i<=n;i++)
                       {
                           tweet[i]=0;
                                                    
                        }
                        
                           
                       count=0;
                       printf("0\n");
               }             
             
    }
    
}
