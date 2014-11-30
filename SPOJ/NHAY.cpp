    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int ans;
    void computeLPSArray(string pat, int M, int *lps);

    void KMPSearch(string pat, string  txt)
    {
        int M = pat.length();
        int N = txt.length();
        int *lps = (int *)malloc(sizeof(int)*M);
        int j  = 0;  // index for pat[]
        computeLPSArray(pat, M, lps);

        int i = 0;  // index for txt[]
        while(i < N)
        {
          if(pat[j] == txt[i])
          {
            j++;
            i++;
          }

          if (j == M)
          {
            printf("%d\n", i-j);
            ans++;
            j = lps[j-1];
          }
          else if(pat[j] != txt[i])
          {
            if(j != 0)
             j = lps[j-1];
            else
             i = i+1;
          }
        }
        free(lps);
    }

    void computeLPSArray(string pat, int M, int *lps)
    {
        int len = 0;
        int i;

        lps[0] = 0;
        i = 1;
        while(i < M)
        {
           if(pat[i] == pat[len])
           {
             len++;
             lps[i] = len;
             i++;
           }
           else // (pat[i] != pat[len])
           {
             if( len != 0 )
             {
                 len = lps[len-1];
             }
             else // if (len == 0)
             {
               lps[i] = 0;
               i++;
             }
           }
        }
    }

    int main()
    {
        int t;
        while(cin>>t)
        {
            ans=0;
            string n,h;
            cin>>n>>h;
            KMPSearch(n,h);
            if(ans==0)
                cout<<endl<<endl;

        }
    return 0;
    }
