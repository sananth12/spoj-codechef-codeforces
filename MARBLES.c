#include<stdio.h>
int main()
{
        long long N;
        scanf("%Ld",&N);
        long long n,k,i;
        long long res;
        while(N--)
        {
                scanf("%ld %ld",&n,&k);
                res =1;
                long long c;
                i=1;
                long long start = n-k+1;
                n--;
                k--;
                if(start!=1)
                {
                        if(start < k)
                        {
                                start=k+1;
                                k = n-k;
                        }
                        for(c=1;c<=k;c++)
                        {
                                res*=start;
                                start++;
                                while(i<=k && res%i == 0)
                                        res/=i++;
                        }
                }
                printf("%Ld\n",res);
        }
} 
