#include<stdio.h>
#include<math.h>
typedef int bool;
#define true 1
#define false 0
inline long long fastinput()
{
	long long  inp=0;char c=0;
        c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		inp=inp*10+c-'0';
		c=getchar_unlocked();
	}
	return inp;
}
int palin( char *str )
{
    //int n = strlen( str ); // get length of input string
        int n=32;
    // table[i][j] will be false if substring str[i..j] is not palindrome.
    // Else table[i][j] will be true
    bool table[n][n];
    memset( table, 0, sizeof( table ) );

    // All substrings of length 1 are palindromes
    int i,maxLength = 1;
    for( i = 0; i < n; ++i )
        table[i][i] = true;

    // check for sub-string of length 2.
    int start = 0;
    for( i = 0; i < n-1; ++i )
    {
        if( str[i] == str[i+1] )
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }
  int k;
    // Check for lengths greater than 2. k is length of substring
    for(  k = 3; k <= n; ++k )
    {
        // Fix the starting index
        for( i = 0; i < n - k + 1 ; ++i )
        {
            // Get the ending index of substring from starting index i and length k
            int j = i + k - 1;

            // checking for sub-string from ith index to jth index iff str[i+1]
            // to str[j-1] is a palindrome
            if( table[i+1][j-1] && str[i] == str[j] )
            {
                table[i][j] = true;

                if( k > maxLength )
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }

    return maxLength; // return length of LPS
}
int main()
{
    long long x,t;
   //scanf("%lld",&t);
   t=fastinput();
   while(t--)
   {
         int a[32]={0},j,k,i=0,max=0,h,l;
         char s[32]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0',
                      '0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'  };
         //scanf("%lld",&x);
         x=fastinput();
         while(x>0)
         {
             a[i]= x&1;
             s[i]= '0'+ (x&1);
             x=x>>1;
             i++;
            // printf("%d %lld\n",i,x);
         }
         if(i<16)
         {
             max=32-i;
         }
         else
         {
            max=palin(s);
         }
         printf("%d\n",max);
   }


return 0;
}
