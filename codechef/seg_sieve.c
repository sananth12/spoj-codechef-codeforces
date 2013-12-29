#include <string.h>
#include<stdio.h>
#include<math.h>
#define MAX 1000002
#define LMT 1001
#define LEN 100000
#define RNG 1000002

long long  base[MAX/64], segment[RNG/64], primes[LEN]={0};

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))


void sieve()
{
    long long  i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!chkC(base, i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                setC(base, j);
    for(i=3, j=0; i<MAX; i+=2)
        if(!chkC(base, i))
            primes[j++] = i;
}


long long  segmented_sieve(long long  a, long long  b)
{  // printf("*");
    long long  i, j, k, cnt = (a<=2 && 2<=b)? 1 : 0;
    if(b<2) return 0;
    if(a<3) a = 3;
    if(a%2==0) a++;
    mset(segment,0);
  //  printf("*");
    for(i=0; sq(primes[i])<=b && primes[i]!=0; i++)
    {
        j = primes[i] * ( (a+primes[i]-1) / primes[i] );
        if(j%2==0) j += primes[i];
        for(k=primes[i]<<1; j<=b; j+=k)
            if(j!=primes[i])
                setC(segment, (j-a));
    }
    for(i=0; i<=b-a; i+=2)
        if(!chkC(segment, i))
            cnt++;
    return cnt;
}
int main()
{
    sieve();
  //  printf("%ld\n",segmented_sieve(10000000000,10000001000));
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long   i,j,x,y,w=0,ans=0,pr[]={2 ,3, 5, 7 ,11 ,13 ,17 ,19 ,23 ,29 ,31, 37  };
        scanf("%lld%lld",&x,&y);
       // printf("x=%ld y=%ld\n",x,y);
       ans=segmented_sieve(x,y);
        if(x<=1000000)
            w=1;

        for(i=0;primes[i]<=sqrt(y);i++)
        {
            for(j=0+w;j<12;j++)
            {
                long long  f=pow(primes[i],pr[j]-1);
                if(f>=x && f<=y)
                    ans++;
                if(f>y)
                    break;
            }
        }
        for(j=0+w;j<12;j++)
            {
                long long  f=pow(2,pr[j]-1);
                if(f>=x && f<=y)
                    ans++;
                if(f>y)
                    break;
            }
        printf("%lld\n",ans);

    }
}
