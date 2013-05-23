/* Name: Alex Velazquez
 * Start Date: October 04, 2011 @ 12:51AM
 * End Date:   October 04, 2011 @ 01:22AM
 * Purpose: To solve the SPOJ problem HEXBOARD - Hexagonal Board
 */

#include <iostream>

using namespace std;

void hexboard (int N)
{
	int S = 2+4*(N-1)+1;
	string B[S][S];
	//initialize
	for (int i=0;i<S;++i)
		for (int j=0;j<S;++j)
			B[i][j] = " ";
	//store "_"'s 
	int sLeft = S/2;
	int sRight = S/2;
	int times = 2*N;
	int i=0;
	while (sLeft > 0)
	{
		for (int k=0;k<times;++k)
		{
			B[i+2*k][sLeft] = "_";
			if (k != times-1){
			B[i+1+2*k][sLeft-1] = "/";
			B[i+2+2*k][sLeft-1] = "\\";
			B[i+1+2*k][sLeft+1] = "\\";
			B[i+2+2*k][sLeft+1] = "/";}
			B[i+2*k][sRight] = "_";
			if (k != times-1){
			B[i+1+2*k][sRight-1] = "/";
			B[i+2+2*k][sRight-1] = "\\";
			B[i+1+2*k][sRight+1] = "\\";
			B[i+2+2*k][sRight+1] = "/";}
		}
		sLeft -= 2;
		sRight += 2;
		++i;
		--times;
	}
	for (int a=0;a<S;++a)
	{
		for (int b=0;b<S;++b)
		{
			cout << B[a][b];
		}
		cout << endl;
	}
}

int main ()
{
	int N;
	while (cin >> N)
	{
		if (N == -1)
			break;
		hexboard(N);
		cout << "***" << endl;
	}
}
