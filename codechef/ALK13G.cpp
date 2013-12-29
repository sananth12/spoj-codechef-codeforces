#include<stdio.h>
#include<iostream>
using namespace std;
int minSum(int *A, int lo, int hi)  {
    int left = lo, right = lo, sum = 1000000000, currentMinSum = 0, minLeft = lo, minRight = lo;
    for(int i = lo; i < hi; i++)    {
        currentMinSum += A[i];
        if(currentMinSum < sum) {
            sum = currentMinSum;
            right = i;
            minLeft = left;
            minRight = right;
        }
        if(currentMinSum > 0)   {
            left = i+1;
            right = left;
            currentMinSum = 0;
        }
    }
    printf("Minimum sum contiguous subarray :");
    for(int i = minLeft; i <= minRight; i++)
        printf(" %d", A[i]);
    printf("\n");
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100005],n;
        long long sum=0,max=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        max=minSum(a,0,n);
        cout<<sum+(2*max)<<"\n";
    }
  return 0;
}
