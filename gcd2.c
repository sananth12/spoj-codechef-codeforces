#include<stdio.h>

int gcd(int a, long b1)
{
	if (b1==0)
		return a;
	else
		return gcd(b1,a%b1);
}
int main()
{
   int t;
   scanf("%d",&t);    
   while(t--)
   {         
      int a;
      char c[256];
      scanf("%d%s",&a,&c);
      if(a==0)
      printf("%s\n",c);
      else
      {
          int i,r=0;
          for(i=0;c[i];i++)
          {
            r=10*r+(c[i] - 48);
             r = r%a;
           }
      if(a==1)
      printf("%d\n",1);
      else
      printf("%d\n",gcd(a,r));
      }
   }
             
return 0;
}
