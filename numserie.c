#include<stdio.h>
int main()
{
    
    long long t[100];
    int i;
    t[0]=1;
    t[1]=2;
    t[2]=3;
    printf("%lld\n%lld\n%lld\n",t[0],t[1],t[2]);
    for(i=3;i<100;i++)
    {
        t[i]=t[i-1]+t[i-3];
        printf("%lld\n",t[i]);                  
    }    
 return 0;   
}
