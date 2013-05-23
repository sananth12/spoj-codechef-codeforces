#include<stdio.h>
int main()
{
    int x,y,a,b,t,r,s=22;
    a=22,b=7;
    t=1;
    while(t--)
    {   int d,c=0,s=a;
        //scanf("%d",&d);
        d=1000;
        if(d==0)
                {printf("3");}
        else
             printf("3.");
        r=s%b;
        while(d--)
        {   c=0;
            while(r<=b)
                {r*=10;c++;}
            if(c>=1)
            c--;
            while(c-- && d>0)
                   {
                       printf("0");
                       d--;
                   }
            s=r/b;
            r=r%b;
            int n[100]={0},j=0;
            while(s>0)
            {
                n[j]=s%10;
                s/=10;
                j++;
            }
            while(j-- && d>=0)
            {
                printf("%d",n[j]);
                if(j!=0)
                d--;
            }
        }
         printf("\n");
    }
return 0;
}
