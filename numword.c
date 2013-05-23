#include<stdio.h>

void pw(long,char[]);
char *one[]={" ","one","two","three","four","five","six","seven","eight","Nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char *ten[]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};


int main()
{
 long n;
 scanf("%ld",&n);
 if(n==0)
                printf("zero");
 else
 {
                  pw(((n/1000)%100),"thousand");
                  pw(((n/100)%10),"hundred");
                  pw((n%100)," ");
 }
 getch();
 return 0;
}


void pw(long n,char ch[])
{
 (n>19)?printf("%s %s ",ten[n/10],one[n%10]):printf("%s ",one[n]);
 if(n)printf("%s",ch);
}
