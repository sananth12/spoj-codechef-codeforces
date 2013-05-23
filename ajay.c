#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
  while(t--)
   {
      int k,f=0;
      int x,y;
      int z[70]={4,1,5,9,2,6,5,3,0,1,1,9,0,2,6,0,4,0,7,2,2,6,1,4,9,4,7,7,3,7,2,9,6,8,4,0,0,7,0,0,8,6,3,9,9,6,1,3,3,1,6};
      scanf("%d",&k);
     int d=103993%33102;
     int c=33102;
      printf("3");
      int count1=0;
      int q=0;
      while(count1<k)
       {
          if(f==0)
          {printf(".1");f++;count1++;}
          else
          {printf("%d",z[q%51]);count1++;q++;}
       }
      printf("\n");
   }
   return 0;
}
