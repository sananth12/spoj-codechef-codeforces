#include<stdio.h>
#define s(x) scanf("%lld",&x)
int main(){long long t,n,p,q,x;s(t);while(t--){p=0,q=0;s(n);while(n--){s(x);if((n+1)%2<1&&x>0)p+=x;if((n+1)%2>0&&x<0)q+=(-1*x);}(p>=q)?puts("Some Mirrors Lie!\n"):puts("Every Girl Lies!\n");}return 0;}
