#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define ll long long

ll read_int(ll mn, ll mx, char next){
  int c, fg = 1, res = 0;
  c=getchar();
  if(c=='-') fg = -1, c = getchar();
  assert('0'<=c && c<='9');
  res = c - '0';
  for(;;){
    c = getchar();
    if(c==next) break;
    assert(res!=0);
    assert('0'<=c && c<='9');
    res = res * 10 + (c - '0');
  }
  res *= fg;
  assert(mn<=res && res<=mx);
  return res;
}

void unionInit(int d[],int s){int i;rep(i,s)d[i]=i;}
int unionGet(int d[],int n){int t=n,k;while(d[t]!=t)t=d[t];while(d[n]!=n)k=d[n],d[n]=t,n=k;return n;}
int unionConnect(int d[],int a,int b){a=unionGet(d,a);b=unionGet(d,b);if(a==b)return 0;d[a]=b;return 1;}

int N, M;
int edge[5200][5200], es[5200], art[5200];
int num[5200], lw[5200], up[5200];
int now;

void check(void){
  int i, j;
  int ind[5200];

  unionInit(ind, N);
  rep(i,N) rep(j,es[i]) unionConnect(ind, i, edge[i][j]);
  REP(i,1,N) assert( unionGet(ind,0)==unionGet(ind,i) );
}

void dfs(int node){
  int i, k;

  num[node] = now++;
  rep(i,es[node]){
    k = edge[node][i];
    if(up[k] != -2) continue;
    up[k] = node;
    dfs(k);
  }
}

int get_lw(int node){
  int i, k;
  int res = num[node], tmp;

  if(lw[node] != -1) return lw[node];
  rep(i,es[node]){
    k = edge[node][i];
    if(up[k]==node){
      tmp = get_lw(k);
    } else {
      tmp = num[k];
    }
    if(res > tmp) res = tmp;
  }

  return lw[node] = res;
}


int main(){
  int T, A, B, K, Nsum = 0;
  int i, j;
  int res;

  T = read_int(1, 1500, '\n');

  while(T--){
    N = read_int(2, 3000, ' ');
    M = read_int(N-1, N*(N-1)/2, ' ');
    K = read_int(1, 1000, '\n');
    Nsum += N; assert(Nsum <= 3000);

    rep(i,N) es[i] = 0;
    while(M--){
      A = read_int(0, N-1, ' ');
      B = read_int(0, N-1, '\n');
      assert( A!=B );
      edge[A][es[A]++] = B;
      edge[B][es[B]++] = A;
    }

    check();

    rep(i,N) up[i] = -2;
    up[0] = -1; now = 0;
    dfs(0);
    rep(i,N) assert( up[i] != -2 );

    rep(i,N) lw[i] = -1;
    get_lw(0);

    rep(i,N) art[i] = 0;

    j = 0;
    rep(i,N) if(up[i]==0) j++;
    if(j>=2) art[0] = 1;

    REP(i,1,N) if(up[i]!=0) {
      if( num[up[i]] <= lw[i] ) art[up[i]] = 1;
    }

    res = 0;
    rep(i,N) if(art[i]) res += K;
    printf("%d\n",res);
  }

  assert( scanf("%*c")==EOF );
  return 0;
}
