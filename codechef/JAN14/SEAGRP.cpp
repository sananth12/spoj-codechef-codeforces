#include <vector>
#include <cstring>
#include <string>
#include <stdio.h>
#include <iostream>
#define FORC(it,v) for( __typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it )
using namespace std;
long long arr[ 105 ];
long long a[ 105 ];
vector< vector< long long > > G;
long long match( long long x )
{
    if( x == -1 )
        return true;
    if( arr[ x ] == true )
        return false;
    arr[ x ] = true;
    FORC( it, G[ x ] )
        if( match( a[ *it ] ) )
        {
            a[ x ] = *it;
            a[ *it ] = x;
            return true;
        }
    return false;
}

int main( )
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n, e,ans=0;
    cin>>n>>e;

    memset( a, -1, sizeof a );
    G.clear(); G.resize( n );
    for( int i = 0; i < e; i++ )
        {
            int a, b;
            cin>>a>>b;
            --a, --b;
            G[ a ].push_back( b );
            G[ b ].push_back( a );
        }
   if(n%2==1)
        cout<<"NO\n";
    else{
    for( int i = 0; i < n; ++i )
    {
        if( a[i] != -1 )
            continue;
        a[i] = i;
        memset( arr, 0, sizeof arr );
        ans += match( i );
    }
    if( ans==n/2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }

    }
    return 0;
}
