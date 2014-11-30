#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,c=1;
    long int t;
    scanf("%ld",&t);
    while(t--){
               scanf("%lld",&a);
               b=sqrt(a);
               if(b*b==a){
                 printf("Case %lld: Yes\n",c);
               }else{
                 printf("Case %lld: No\n",c);
               }
               c++;
     }
        return 0;
     }
