/*
-- Anantha Natarajan.S
-- Sept 13 2013
-- Problem SPOONS/SEPT13
-- GCC 4.8
*/
#include<stdio.h>
int main()
{
   int i,t;
   long long arr[]={0,1,2 , 3 , 6 , 10 , 20 , 35 , 70 , 126 , 252 , 462 , 924 , 1716 , 3432 , 6435 , 12870 , 24310 , 48620 , 92378 ,
    184756 , 352716 , 705432 , 1352078 , 2704156 , 5200300 , 10400600 , 20058300 , 40116600 , 77558760 , 155117520 , 300540195 ,
    601080390 , 1166803110 , 2333606220 , 4537567650 , 9075135300 , 17672631900 , 35345263800 , 68923264410 , 137846528820 ,
    269128937220 , 538257874440 , 1052049481860 , 2104098963720 , 4116715363800 , 8233430727600 , 16123801841550 , 32247603683100
    , 63205303218876 , 126410606437752 , 247959266474052 , 495918532948104 , 973469712824056 , 1946939425648112 ,
    3824345300380220 , 7648690600760440 , 15033633249770522 , 30067266499541040 , 59132290782430720 , 118264581564861424 ,
    232714176627630496 , 465428353255261056 , 916312070471295104 , 1832624140942590464};
   double a[65]={0};
   a[0]=0;
   a[1]=1;
   double j,k,ans=1;
    for(k=2;k<=64;k++)
    {
        ans=1;
        for(j=k;j>k/2;j--)
        {
            ans*= j/(k-j+1);
        }
        a[(int)k]=ans;
    }
   scanf("%d",&t);
   while(t--)
   {
        double n;
        scanf("%lf",&n);
        for(i=0;i<=64;i++)
        {
            if(n==0)
            {
                printf("0\n");
                break;
            }
            if(n<=a[i])
            {
                printf("%d\n",i);
                i=65;
                break;
            }
        }
   }
return 0;
}
