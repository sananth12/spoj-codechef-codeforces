#include <stdio.h>

int main()
{
        int t;
        scanf("%d", &t);
        while(t--)
            {
                int n;
                scanf("%d", &n);
                 --n;
                long long r = 1, ans = 2;
                while(n)
                    {
                        if(n & 1)
                        r = (r * ans) %  1000000007;
                        ans = (ans * ans) %  1000000007;
                        n >>= 1;
                    }
                 printf("%lld\n", r);
        }
        return 0;
}
