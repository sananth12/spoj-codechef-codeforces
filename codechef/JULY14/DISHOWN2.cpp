#include <iostream>
#include <stdio.h>
using namespace std;

long long int fastreadl(long long int* a)
{
 char c=0;
 while (c<33)
 c=getchar();
 *a=0;
 while (c>33)
{
    *a=*a*10+c-'0';
    c=getchar();
}
return 0;
}



long long int fastread(long long int* a)
{
 char c=0;
 while (c<33)
 c=getchar();
 *a=0;
 while (c>33)
{
    *a=*a*10+c-'0';
    c=getchar();
}
return 0;
}

int main() {
	long long int t,n,q,s;

	fastread(&t);
	for(long long int i=0;i<t;i++){
		fastread(&n);
		long long int a[n][4];
		for(long long int i=0;i<n;i++){
			fastreadl(&a[i][0]);
			a[i][1]=i+1;
			a[i][2]=a[i][0];
			a[i][3]=1;
		}
		fastread(&q);
		long long int x,y,h,l;
		for(int k=0;k<q;k++){
			fastread(&s);
			if(s==0){
				fastreadl(&x);
				fastreadl(&y);

				h=x;
				while(h!=a[h-1][1]){
					h=a[h-1][1];
				}
				l=y;
				while(l!=a[l-1][1]){
					l=a[l-1][1];
				}

				if(a[h-1][1]==a[l-1][1]){
					cout<<"Invalid query!\n";
				}
				else{
					x=h;
					y=l;
					if(a[x-1][2]>a[y-1][2]){
						h=x;
						l=y;
					}
					else if(a[x-1][2]<a[y-1][2]){
						h=y;
						l=x;
					}

					if(a[x-1][2]!=a[y-1][2]){
						a[l-1][1]=a[h-1][1];
						//a[h-1][3]+=a[l-1][3];
						//a[l-1][3]=0;
					}
				}

			}
			else{
				fastreadl(&x);
				h=x;
				while(h!=a[h-1][1]){
					h=a[h-1][1];
				}
				cout<<a[h-1][1]<<"\n";
			}
		}
	}
	return 0;
}
