#include<stdio.h>
int main()
{
   int t,i,value=0;
   scanf("%d",&t);
   while(t--)
   {
        int count=0,value=0;
        char q[5],w[5],c,d,s[]={'A','2','3','4','5','6','7','8','9','K','Q','J'};
        scanf("%s%s",&q,&w);
        c=q[0];
        d=w[0];

        for(i=0;i<12;i++)
        {
            // printf("%c\n",s[i]);
            if(c==s[i])
            {
              // printf("*");
                value++;
                if(i>=9)
                 count+=10;
                else if(i>0)
                count+=(i+1);
                else
                count+=11;
            }
            if(d==s[i])
            {
                value++;
              // printf("*");
                if(i>=9)
                 count+=10;
                else if(i>0)
                count+=(i+1);
                else
                {
                    if(count<11)
                    count+=11;
                    else
                    count+=1;
                }
            }
        }
        if(value!=2)
        printf("INVALID\n");
        else
        {
           if(count<=11)
           printf("HIT\n");
           else
           printf("STAND\n");
        }

   }
return 0;
}
