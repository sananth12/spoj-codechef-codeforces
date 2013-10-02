#include<stdio.h>
long gcd(long m, long n)
{
        long tmp;
        while(m) { tmp = m; m = n % m; n = tmp; }
        return n;
}

long lcm(long m, long n)
{
        return m / gcd(m, n) * n;
}
int main()
{
   long a,b,x,y,z;
   scanf("%ld%ld%ld%ld",&x,&y,&a,&b);
   z=lcm(x,y);
   long ans=(b/z)-(a/z);
   if(a%z==0)
   ans++;
   printf("%ld",ans);
return 0;
}
