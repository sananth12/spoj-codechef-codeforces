#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {              
                   char s[210]={0};
                   scanf("%s",&s);
                   int i=0,k=0;
                   int val[125]={0},count=0;     
              
                   for(i=0;i<200&&s[i]!=0;i++)
                   {          
                              k=s[i];
                             val[k]++;                             
                   }  
                    for(i=65;i<=90;i++)
                    {
                       if(val[i]==1)
                       count++;
                       
                       else
                       {
                             if(val[i]%2==1)
                             count++;                   
                             
                             count+=(val[i]/2);
                       }
                    } 
                     for(i=97;i<=122;i++)
                    {
                       if(val[i]==1)
                       count++;
                       
                        else
                       {
                             if(val[i]%2==1)
                             count++;                   
                             
                             count+=(val[i]/2);
                       }
                    } 
                    
                    printf("%d\n",count);
    }
    
return 0;
}
