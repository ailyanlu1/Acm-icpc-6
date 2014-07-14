
#include <iostream>
#include <sstream>
#include <ios>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cctype>
using namespace std;
#define XINF INT_MAX
#define INF 0x3FFFFFFF
#define MP(X,Y) make_pair(X,Y)
#define PB(X) push_back(X)
#define REP(X,N) for(int X=0;X<N;X++)
#define REP2(X,L,R) for(int X=L;X<=R;X++)
#define DEP(X,R,L) for(int X=R;X>=L;X--)
#define CLR(A,X) memset(A,X,sizeof(A))
#define IT iterator
typedef long long ll;
typedef pair<int,int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;

#define MAXN 1000

ll dp[MAXN][MAXN];

ll C(int a,int b)
{
    if( a<MAXN && b<MAXN && dp[a][b])return dp[a][b];

    if( a==b ||b==0) return 1;
    if( b==1) return a;

    int ret = C(a-1,b-1)*a/b;
    if( a<MAXN && b<MAXN)
        dp[a][b] = ret;
    return ret;
}

int main()
{
	ios::sync_with_stdio(false);


    int a,b;
    int cse = 0;
    while(cin>>a>>b)
    {
        cout<<"Case "<<++cse<<": ";
        cout<<"C("<<a<<", "<<b<<")"<<" = ";
        if(b>a)cout<<"0"<<endl;
        else cout<<C(a,b)<<endl;
    }
	return 0;
}



