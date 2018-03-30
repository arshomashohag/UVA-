#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<set>
#include<utility>
#define lld long long int

using namespace std;
vector<lld> net[100000];
int chk[100000];


lld bfs(lld f, lld ttl)
{
    queue<pair<lld, lld> > myq;
    pair<lld , lld> node;

    lld ttlx, nx, x, tt, ret=1, vs, i;

    myq.push(make_pair(f, ttl));
     chk[f]=1;

    while(!myq.empty())
    {
        node = myq.front();
        myq.pop();

        x = node.first;
        tt = node.second;

        if(tt<=0)
            break;

        vs = net[x].size();

        for(i=0; i<vs; i++)
        {
            nx = net[x][i];
            if(chk[nx]==0)
            {
                myq.push( make_pair(nx, tt-1) );
                chk[nx]=1;
                ret++;
            }
        }
    }

    return ret;

}




int main(void)
{
 lld n, x, y, inx, ttl, out, i, j, ss, cn=1;
  set<lld> mys;

 while(scanf("%lld",&n) && n)
 {
     for(i=1; i<=n; i++)
     {
         scanf("%lld%lld",&x,&y);
         net[x].push_back(y);
         net[y].push_back(x);
         mys.insert(x);
         mys.insert(y);
     }
     ss = mys.size();
     mys.clear();

     while(scanf("%lld%lld",&inx,&ttl) && (inx || ttl))
     {
        memset(chk, 0, sizeof(chk));
           out = bfs(inx, ttl);

            out = ss - out;
           printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",cn++, out, inx, ttl);

     }

     for(i=0; i<100000; i++)
     {
         net[i].clear();
     }

 }

    return 0;
}
