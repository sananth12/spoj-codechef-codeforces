    #include <stdio.h>
    int pow(int a,int b)
    {   int c=1,i;
        for(i=0;i<b;i++)
        {
               c=c*a;
        }
        return c;
    }         
    int main()
    {
    int t,n;
    scanf("%d",&t);
    while(t-->0)
    {
    scanf("%d",&n);
    printf("%d\n",pow(2,n-1));
    }
    return 0;
    } 
