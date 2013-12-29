#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string S;
		int dots=0;
		cin>>S;
		for(int i=0;i<10;i++)
		{
			if(S[i]=='0')
			{
				cout<<"-----";
			}
			else if(S[i]=='1')
			{
				cout<<".----";
				dots++;
			}
			else if(S[i]=='2')
			{
				cout<<"..---";
				dots+=2;
			}
			else if(S[i]=='3')
			{
				dots+=3;
				cout<<"...--";
			}
			else if(S[i]=='4')
			{
				dots+=4;
				cout<<"....-";
			}
			else if(S[i]=='5')
			{
				dots+=5;
				cout<<".....";
			}
			else if(S[i]=='6')
			{
				dots+=4;
				cout<<"-....";
			}
			else if(S[i]=='7')
			{
				dots+=3;
				cout<<"--...";
			}
			else if(S[i]=='8')
			{
				dots+=2;
				cout<<"---..";
			}
			else if(S[i]=='9')
			{
				dots+=1;
				cout<<"----.";
			}
		}
		cout<<endl;
		cout<<dots<<endl;
	}
	return 0;
}
