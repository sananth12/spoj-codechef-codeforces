#include <stdio.h>
#include <string.h>

int match(const char *s, const char *p, int overlap)
{
        int c = 0, l = strlen(p);

        while (*s != '\0') {
                if (strncmp(s++, p, l)) continue;
                if (!overlap) s += l - 1;
                c++;
        }
        return c;
}

int main()
{       char a[1000],b[1000],cat[2000];
        scanf("%s",&a);
        scanf("%s",&b);
        int i,j,counter=0,k;
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;(j+i)<strlen(a);j++)
            {    for(k=j;k<j+i;k++)
                   strcat(cat,a[k]);
                counter+=match(b,cat,0);
            }
        }
        printf("%d",cat);

        return 0;
}
