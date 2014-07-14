
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

struct cmp
{
    bool operator () ( int a, int b)
    {
        return a<b;
    }
};
int main()
{
	//ios::sync_with_stdio(false);
    char c;
    int p=0;
    int cse = 0;
    int num;
    priority_queue<int,vector<int>,cmp> q;

    while(scanf("%d%c",&num,&c)!=EOF)
    {
        q.push(num);
        if(c=='\n')
        {
            vector<int> tmp;
            tmp.clear();
            cout<<"Case "<<++cse<<": ";
            for(int i=0;i<10;i++)
            {
                int d = q.top();q.pop();
                cout<<d;
                tmp.push_back(d);
                if( i==9)cout<<endl;
                else cout<<", ";
            }
            for(int i=0;i<10;i++)
            {
                q.push(tmp[i]);
            }
        }
    }
	return 0;
}


