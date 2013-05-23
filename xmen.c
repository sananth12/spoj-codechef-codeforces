#include<stdio.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        char a[100000],b[100000];
        scanf("%d",&n);
        scanf("%s%s",&a,&b);
        int i,j,len=0,k,pos=-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                 if(len>(n-i) || len> (n-j))
                 {}
                 else
                 {  
                     pos=i;
                    for(k=0;k<(n-i)||k<(n-i);k++)
                    {
                            if(a[i+k]==b[j+k])
                            len++;
                            else
                            k=n;
                    }
                 }           
            }               
        }
        for(i=pos;i<=pos+len;pos++)
        printf("%c",a[i]);
        
        printf("\n");     
    }
return 0;
}
