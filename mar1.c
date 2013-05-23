#include<stdio.h>
int main()
{
    int d,t,n[]={4,1,5,9,2,6,5,3,0,1,1,9,0,2,6,0,4,0,7,2,2,6,1,4,9,4,7,7,3,7,2,9,6,8,4,0,0,7,0,0,8,6,3,9,9,6,1,3,3,1,6};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&d);
        if(d==0)
            printf("3");
        else if(d==1)
            printf("3.1");
        else
        {
              printf("3.1");
              int i=0,j=0;
            for(i=0;i<d-1;i++,j++)
            {
              printf("%d",n[j]);
              if(j+1==51)
                j=-1;
            }
        }
         printf("\n");
    }

return 0;
}
