#include<stdio.h>

int main(){
    int loop;
    scanf("%d",&loop);
    while(loop--)
    {

	int t;
	scanf("%d",&t);
	int prev=0;
	int min=0;
	int i=0,a;
	while(i<t){
		scanf("%d",&a);
		if(prev>a) min=i;
		prev=a;
		i++;
	}
	printf("%d\n",min);
    }
	return 0;
}
