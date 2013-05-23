#include<stdio.h>
int main()
{
    
    long p=0,i,j,f=0,n;
    for(i=2;i<10000;i++)
    {       
            f=1;
           for(j=2;j<i;j++)                
           { if(i%j==0)               
                 f=0;
                 }
              if(f)            
            {p++;n=i;}
     }

printf("%NUMBER :%ld and its :%ld",p,n);

getch();
}
