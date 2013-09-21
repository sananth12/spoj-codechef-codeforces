/*
-- Anantha Natarajan.S
-- Sept 9 2013
-- Problem INTEG/SEPT13
-- GCC 4.8
*/
#include<stdio.h>
#define gc getchar_unlocked
long long scanint()
{
    register long long c = gc();
    long long x = 0;
    long long neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;

    return x;
}
int main()
{
   long long x,pos=0,temp;
   long long arr[100001];
   scanf("%lld",&x);
   long long ans=0,total=0;
   while(x--)
   {
        //scanf("%lld",&temp);
        temp=scanint();
        if(temp<0)
        {
            //a[pos]=-1*temp;
            total+=(-1*temp);
            arr[pos]=-1*temp;
            pos++;
        }
   }

   scanf("%lld",&x);
   if(x==0 || pos==0)
   {
       printf("0");
        return 0;
   }
   else if(x>=pos)
   {
        printf("%lld",total);
        return 0;
   }
   else
    {
   long long i,k=pos-x;
   //sort(a,a+pos);
   long long from = 0, to = pos-1,r=0,mid=0,tmp,w;

 // if from == to we reached the kth element
 while (from < to) {
   r = from, w = to;
  mid = arr[(r + w) / 2];

  // stop if the reader and writer meets
  while (r < w) {

   if (arr[r] >= mid) { // put the large values at the end
    tmp = arr[w];
    arr[w] = arr[r];
    arr[r] = tmp;
    w--;
   } else { // the value is smaller than the pivot, skip
    r++;
   }
  }

  // if we stepped up (r++) we need to step one down
  if (arr[r] > mid)
   r--;

  // the r pointer is on the end of the first k elements
  if (k <= r) {
   to = r;
  } else {
   from = r + 1;
  }
 }
   ans=x*arr[k];

   for(i=pos-x+1;i<pos;i++)
   ans+= (arr[i]-arr[k]);

   printf("%lld",ans);
   }
return 0;
}
