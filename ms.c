# include <stdio.h>
int main()
{
char str[20],rev[20] ;
int t;
scanf("%d",&t);
while(t--)
{
int i, j, l ;
scanf("%s",str) ;
            for(l=0 ; str[l] != '\0' ; l++) ;
               for(i = l - 1, j = 0 ; i >= 0 ; i--, j++)
                     rev[j] = str[i] ;
                     rev[j] = '\0' ;

if(strcmp(str, rev) == 0)
printf("YES\n") ;
else
printf("NO\n") ;
}
return 0;
}
