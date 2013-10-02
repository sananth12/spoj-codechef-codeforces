#include<stdio.h>
#include<math.h>
int main(){
  int p,num,i=1,j,k;
  //printf("\nEnter a number:");
  //scanf("%d",&num);
  for(num=2;num<=1000;num++){
      i=1,p=0;
  while(i<=num){
      k=0;
      if(num%i==0){
         j=1;
          while(j<=i){
            if(i%j==0)
                 k++;
             j++;
          }
          if(k==2)
            p++;
      }
      i++;
   }
   printf("%d:%0.lf,",num,pow(2,p-1));}
   return 0;
}
