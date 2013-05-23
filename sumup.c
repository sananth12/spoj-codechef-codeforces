#include<stdio.h>
int main()
{
    int t,c=0;
    float n[10005]={0},p=1,k,i;
    scanf("%d",&t);
     for(i=1,k=3;i<=10001;i++,k+=2)
       {
        n[(int)i]=(i/((p*p)+(p+1)));
        p+=k;
       }
    while(t--)
    {
        int g;
        float sum=0;
        scanf("%d",&g);
        for(i=1;i<=g;i++)
        {
            sum+= n[(int)i];
        }
        printf("%0.5f\n",sum);
    }
return 0;
}
