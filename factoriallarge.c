
#include<stdio.h>
#define MAX 1000
void factorialof(int);
void multiply(int);
int length = 0;
int fact[MAX];

int main(){
    int num,n;
    int i;
    
    scanf("%d",n);
    while(n--)
    {
   scanf("%d",&num);
   
    fact[0]=1;

    factorialof(num);
   
    
    for(i=length;i>=0;i--){
         printf("%d",fact[i]);
    }
}
return 0;
}


void factorialof(int num){
    int i;
    for(i=2;i<=num;i++){
         multiply(i);
    }
}





void multiply(int num){
    long i,r=0;
    int arr[MAX];
    for(i=0;i<=length;i++){
                arr[i]=fact[i];
        }

    for(i=0;i<=length;i++){
         fact[i] = (arr[i]*num + r)%10;
         r = (arr[i]*num + r)/10;
         //printf("%d ",r);
    }
    if(r!=0){
         while(r!=0){
             fact[i]=r%10;
             r= r/10;
             i++;
         }
    }
    length = i-1;   
}
