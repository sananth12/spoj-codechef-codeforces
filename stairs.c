#include<stdio.h>
#include<math.h>
int func(int n)
{
    int c, k=0;
    for ( c = 31 ; c >= 0 ; c-- )
    {
        if ( n>>c & 1 )
            k++;
    }
    return k;
}
int main()
{
    int t,b,c;
    long long a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %d",&a,&b);
        c=fmod(a*(a-1),1000000007);
        c=c/2;
        if(a==2&&b==2)
          printf("CORRECT\n");
         else if(a==2&&b!=2)
         printf("INCORRECT\n"); 
        else if(a==1&&b==1)
            printf("CORRECT\n");
        else if(a==1&&b!=1)
            printf("INCORRECT\n");
        else if(func(c)==b)
            printf("CORRECT\n");
        else
            printf("INCORRECT\n");
    }
    return 0;
} 
