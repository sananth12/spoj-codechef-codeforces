#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,a;
    scanf("%f%f%f",&x,&y,&a);
    printf("%d",(int)(ceil(x/a)*ceil(y/a)));
return 0;
}
