#include<stdio.h>
int main()
{
    int t,c=0,i,k,p=1;
    float n[10005];
    scanf("%d",&t);
     for(i=1,k=3;i<=100;i++,k+=2)
       {
        n[i]=(float)(i/((p*p)+(p+1)));
        p+=k;
         printf("%f",n[i]);
       }
    while(t--)
    {
        int g;
        float sum=0;
        scanf("%d",&g);
        for(i=1;i<=g;i++)
        {
            sum+= n[i];
        }
        printf("%f\n",sum);
    }
return 0;
}
