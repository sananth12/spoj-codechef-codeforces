#include<stdio.h>
int main()
{
 int t,i,len;
 long long int num;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%lld",&num);
  char str[40];
  i=0;
  //num=num-1;
  if(num%2==0)
            printf("0\n");
        else{
  while(num>0)
  {
   if(num%2==0)
    str[i]='1';
   else
    str[i]='2';
   i++;
   num=num/2;
  }
  len=i-1;
  for(i=len;i>0;i--)
   printf("%c",str[i]);
  printf("\n");
        }
 }
 return 0;
}
