#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int t;
    char s[27];
    scanf("%d%s",&t,&s);
    while(t--)
    {
        char c[101];
        scanf("%s",&c);
        int i,j;
        for(i=0;i<strlen(c);i++)
        {
            if(islower(c[i]))
                printf("%c",s[(int)c[i]-97]);
            else if(isupper(c[i]))
                printf("%c",toupper(s[(int)c[i]-65]));
            else if(c[i]=='_')
                printf(" ");
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
return 0;
}
