#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
typedef unsigned long long ull;
#define mod 1000000007
#define getcx getchar_unlocked
const double max1 = 1e18;
vector<double> v1[100005];              // power upto 10^18 stored in this for each number upto 10^5
void precomp()
{
     double ans;
     for(int i=2;i<100001;i++)
     {
             int j=0;
             while(1)
             {
                if(j==0)
                {
                 v1[i].push_back(1.0);
                 ans=1.0;
                 j++;
                }
                 else
                 {
                     ans=v1[i][j-1]*i;
                     if(ans<=max1)
                     {v1[i].push_back(v1[i][j-1]*i);
                     j++;}
                     else
                     break;
                 }
             }
             ans=1.0;
     }
}
double power(double x, int y)
{
    double temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}

inline void inp( long long int *n )//fast input function
{
   *n=0;
   long long int ch=getcx();long long int sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           *n = (*n<<3)+(*n<<1) + ch-'0', ch=getcx();
   *n=*n*sign;
}
inline void printint(long long int a)
{
	char s[27];
	int t = -1;

	do{
		s[++t] = a % 10 + '0';
		a /= 10;
	}while(a > 0);

	while(t >= 0)putchar_unlocked(s[t--]);
	putchar_unlocked(' ');
}
int main()
{
      precomp();
      int tc;
      scanf("%d",&tc);
      while(tc--)
      {
         int n,m;

         scanf("%d %d",&n,&m);
         long long a[n];
         long long cum[n];
         for(int i=0;i<n;i++)
         {
            inp(&a[i]);
            if(i==0)
            cum[i]=a[i];
            else
            cum[i]=cum[i-1]+a[i];
         }
        long long int q;
         long long int ans=0;

         for(int i=0;i<m;i++)
         {
            ans=0;
            inp(&q);
             if(q!=1)
             {
                vector<long long int > v2;
                v2.push_back(q);
                long long int ans1 = q;
                int count=1;
                while(ans1>1)
                {
                    count++;                             //binary search
                    long long int req,mid;
                    long long int low = 1;
                    long long int high = ans1;
                    double p;
                    while(low<=high)
                    {
                        mid = low+(high-low)/2;
                        if(mid<=100000 && v1[mid].size()>count)                      //mid<=10^5  value can be seen from precomputed table
                        {
                           p=v1[mid][count];
                           //printf("%lf ",s);
                           if(p >q*1.0)
                           high=mid-1;
                           else
                           {
                                req=mid;
                                low = mid+1;
                           }
                        }
                        else if(mid>100000 && count >=4)                         //if mid>10^5   now(10^5)^4 will be greate tha 10^20 so we  need not to check
                        {                                                        //upper powers
                             high = mid-1;
                        }
	                        else
                        {
                            p=power(mid*1.0,count);                        //else power is calculated using log n power function
                            if(p >q*1.0)
                            high=mid-1;
                            else
                            {
                                req=mid;
                                low = mid+1;
                            }
                        }
                    }
                    ans1 = req;
                    v2.push_back(ans1);
                   // printf("%lld ",ans1);
                }
                int lim = n<v2.size()?n:v2.size();
                //printf("%d ",lim);
                for(int j=0;j<lim;j++)
                {
                   if(a[j]>=0)
                   {
                      long long int pt = (v2[j]%mod) *(a[j]%mod);
                      ans = (ans+(pt%mod))%mod;
                   }
                   else
                   {
                       long long int temp = (-1)*a[j];
                       long long int pt = (temp%mod)*(v2[j]%mod);
                       ans=(ans-(pt)%mod+mod)%mod;
                   }
              //     printf("%lld ",ans[i]);
                }
                int ind = v2.size()-1;
                //printf("%d ",ind);
                if(ind<n-1)
                {
                     long long int temp = cum[n-1]-cum[ind];
                     if(temp<0)
                     {
                          temp=(-1)*temp;
                          ans = (ans- (temp)%mod +mod)%mod;
                     }
                     else
                     {
                         ans=(ans+temp%mod)%mod;
                     }
                }
             }
             else
             {
               if(cum[n-1]<0)
               {
                   long long int k=(-1)*cum[n-1];
                   ans = (0 -(k)%mod +mod)%mod;
               }
               else
               ans=cum[n-1]%mod;
             }
           printint(ans);
         }
         //for(int i=0;i<m;i++)

         printf("\n");
      }
      return 0;
}
