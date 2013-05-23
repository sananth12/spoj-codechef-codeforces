#include<iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

#define LOCAL_TEST 0

#define FOR(it,a) for (__typeof((a).begin()) it=(a).begin();it!=(a).end();++it)

const int maxn	=	55;

const int MINE	=	-1000;
const int EMPTY	=	-500;
const int UN	=	-1;

const int dx[]	=	{0,1,1,1,0,-1,-1,-1};
const int dy[]	=	{1,0,-1,1,-1,0,1,-1};

namespace testModuler
{
	const int range	=	1000000;

	int record[maxn][maxn];
	int cntN,cntS,limitN,limitS,n;
	bool answer[maxn][maxn];

	double sumScore=0;
	int testTime=0;

	inline unsigned myRand()
	{
		return (rand()<<15)|rand();
	}

	inline void generate(int &n,int &m,int &limit,int seed=0)
	{
		srand(seed);
		double p=(myRand()%(range*2)+range)/10.0/(double)range;
		n=rand()%21+30;
		m=0;
		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				if (rand()<=p*RAND_MAX){
					record[i][j]=MINE;
					++m;
				}else{
					record[i][j]=EMPTY;
				}
				answer[i][j]=false;
			}
		}
		if (rand()&1){
			limit=m;
		}else{
			limit=rand()%(n*n/2-m+1)+m;
		}

		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				if (record[i][j]==EMPTY){
					int s=0;
					for (int k=0;k<8;++k){
						int x=i+dx[k],y=j+dy[k];
						if (x>=0 && y>=0 && x<n && y<n){
							s+=record[x][y]==MINE;
						}
					}
					record[i][j]=s;
				}
			}
		}

		cntN=0;
		cntS=0;
		limitN=limit;
		limitS=n*n;
		testModuler::n=n;
	}

	inline void N(int x,int y)
	{
		if (cntN==limitN){
			printf("[error] cntN= %d, limitN= %d\n",cntN,limitN);
			assert(false);
		}
//printf("N %d %d\n",x,y);
		if (record[x][y]==MINE){
			for (int k=0;k<8;++k){
				int tx=x+dx[k],ty=y+dy[k];
				if (tx>=0 && ty>=0 && tx<n && ty<n){
					if (record[tx][ty]>=0){
						--record[tx][ty];
					}
				}
			}
		}
		++cntN;
		answer[x][y]=true;
	}

	inline int S(int x,int y)
	{
		assert(cntS<limitS);
		++cntS;
		return record[x][y];
	}

	inline void Done()
	{
		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				if (record[i][j]==MINE && !answer[i][j]){
					printf("%d %d\n",i,j);
					assert(false);
				}
			}
		}
		//puts("OK!");
		sumScore+=10*(cntS+1.0)/(double)n/n;
		++testTime;
		//printf("score = %lf\n",10*(cntS+1.0)/(double)n/n);
		//system("pause");
	}

	inline void finish()
	{
		printf("avgScore = %lf\n",sumScore/testTime);
		system("pause");
	}
};

int value[maxn][maxn];
int n,m,limit,mineCnt;

inline void N(int x,int y)
{
	assert(mineCnt<=limit);
	mineCnt++;
	if (LOCAL_TEST){
		testModuler::N(x,y);
	}else{
		printf("N %d %d\n",x,y);
		fflush(stdout);
	}
}

int cntS;

inline int S(int x,int y)
{
	++cntS;
	if (LOCAL_TEST){
		return testModuler::S(x,y);
	}else{
		printf("S %d %d\n",x,y);
		fflush(stdout);
		char res[10];
		scanf("%s",res);
		if (res[0]=='M') return MINE;
		return res[0]-'0';
	}
}

int C[10][10];

inline bool range(int x,int y)
{
	return x>=0 && y>=0 && x<n && y<n;
}

inline void findMine(int x,int y)
{
	for (int k=0;k<8;++k){
		int tx=x+dx[k],ty=y+dy[k];
		if (range(tx,ty) && value[tx][ty]>=0){
			--value[tx][ty];
		}
	}
}

inline bool query(int &resx,int &resy,bool should=false)
{
	int best=1000000000,bestx,besty,uncover;
	while (true){
		uncover=0;
		best=1000000000;
		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				if (value[i][j]>=0){
					int neighbor=0;
					for (int k=0;k<8;++k){
						int x=i+dx[k],y=j+dy[k];
						if (range(x,y) && value[x][y]==UN){
							++neighbor;
						}
					}
					if (neighbor==0){
						continue;
					}

					if (C[neighbor][value[i][j]]<best || C[neighbor][value[i][j]]==best && value[i][j]>value[bestx][besty]){
						best=C[neighbor][value[i][j]];
						bestx=i;
						besty=j;
					}
				}else{
					if (value[i][j]==UN){
						++uncover;
					}
				}
			}
		}
		if (uncover+mineCnt==limit){
			for (int i=0;i<n;++i){
				for (int j=0;j<n;++j){
					if (value[i][j]==UN){
						N(i,j);
					}
				}
			}
			mineCnt=m;
			return false;
		}
		if (best==1){
			int newValue=value[bestx][besty]?MINE:EMPTY;
			for (int k=0;k<8;++k){
				int x=bestx+dx[k],y=besty+dy[k];
				if (range(x,y) && value[x][y]==UN){
					value[x][y]=newValue;
					if (newValue==MINE){
						N(x,y);
						findMine(x,y);
					}
				}
			}
			continue;
		}else{
			break;
		}
	}
	if (should){
		return false;
	}
	if (best==1000000000){
		int rank=rand()%uncover;
		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				if (value[i][j]!=UN){
					continue;
				}
				if (!(rank--)){
					resx=i;
					resy=j;
					return true;
				}
			}
		}
	}

	int cc=0;
	for (int k=0;k<8;++k){
		int x=bestx+dx[k],y=besty+dy[k];
		if (range(x,y) && value[x][y]==UN){
			++cc;
		}
	}
	int rank=rand()%cc;
	for (int k=0;k<8;++k){
		int x=bestx+dx[k],y=besty+dy[k];
		if (range(x,y) && value[x][y]==UN){
			if (!(rank--)){
				resx=x;
				resy=y;
				return true;
			}
		}
	}
}

const int gap	=	1;

inline void solve()
{
	srand(10);
	mineCnt=cntS=0;

	for (int i=gap;i+gap<n;i+=2*gap+1){
		for (int j=gap;j+gap<n;j+=2*gap+1){
			int x,y;
			query(x,y,true);

			if (mineCnt>=m){
				break;
			}
			if (value[i][j]!=UN){
				continue;
			}
			value[i][j]=S(i,j);
			if (value[i][j]==MINE){
				N(i,j);
				findMine(i,j);
				query(x,y,true);
				if (mineCnt>=m){
					break;
				}

				if (value[i][j-1]==UN || value[i][j-1]==EMPTY){
					value[i][j-1]=S(i,j-1);
					if (value[i][j-1]==MINE){
						N(i,j-1);
						findMine(i,j-1);
						query(x,y,true);
						if (mineCnt>=m){
							break;
						}
						--j;
					}
					--j;
				}
			}
		}
	}

	while (mineCnt<m){
		int x,y;
		if (query(x,y)){
			value[x][y]=S(x,y);
			if (value[x][y]==MINE){
				N(x,y);
				findMine(x,y);
			}
		}
	}

	/*for (int i=0;i<n;++i){
		for (int j=0;j<n;++j){
			printf("%c",value[i][j]==MINE?'*':'.');
		}
		puts("");
	}*/

	if (LOCAL_TEST){
		testModuler::Done();
	}else{
		puts("Done");fflush(stdout);
	}
}

int main()
{
	for (int test_time=0;test_time<(LOCAL_TEST?10:1);++test_time){
		if (LOCAL_TEST){
			printf("test_time = %d\n",test_time);
			int start=time(0);
			while (time(0)-start<2);
			testModuler::generate(n,m,limit,time(0)^123611711);
		}else{
			scanf("%d%d%d",&n,&m,&limit);
		}

		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				value[i][j]=UN;
			}
		}

		for (int i=0;i<10;++i){
			C[i][0]=1;
			for (int j=1;j<10;++j){
				C[i][j]=C[i-1][j]+C[i-1][j-1];
			}
		}

		solve();
	}
	if (LOCAL_TEST){
		testModuler::finish();
	}

	return 0;
}
