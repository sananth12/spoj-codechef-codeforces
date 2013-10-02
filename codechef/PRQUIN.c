#include <stdio.h>
int prime(int x)
{int i;
for(i=2;i<=x/2;i++){if((x%i)!= 0)return 1;else return 0;}
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
    printf("YES");
    else
    printf("");
    return 0;
}
