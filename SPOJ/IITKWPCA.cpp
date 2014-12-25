    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        cin.ignore(1,'\n');
        while(t--)
        {
            string s;
         //   char c[50];
//            fgets(s,1004,stdin);
            getline(cin,s);
            istringstream ss(s);
 //           cin>>ss;
            map < string,int> M;
            string tempStr;
            for( ; ss >> tempStr;)
            {
                M[tempStr]=1;
            }
            cout<<M.size()<<endl;
        }
    return 0;
    }
