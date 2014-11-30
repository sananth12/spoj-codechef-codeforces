#include<bits/stdc++.h>
using namespace std;
int primes[100001]={0},ans=0;
void g(int s[],int p,int k,int t[],int q=0,int r=0)
{
    if(q==k)
    {
        int sum=0;
        for(int i=0;i<k;i++)
           sum+=t[i];

        if(primes[sum]==1)
            ans++;
    }
    else
    {
        for(int i=r;i<p;i++)
        {
            t[q]=s[i];
            g(s,p,k,t,q+1,i+1);
        }
    }
}

void mark(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}
void sieve(int n)
{
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
               // printf("%d ", i+1);
                primes[i+1]=1;
                mark(arr, i+1, n);
            }
        }
    }
}
int main()
{
   //sieve(20);
    int n,i,k,maxx=0;
    cin>>n>>k;
    int a[n],t[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+i);
    for(i=n-1;i>=n-k;i--)
        maxx+=a[i];

    sieve(100000);
    g(a,n,k,t);

    cout<<ans;

return 0;
}
