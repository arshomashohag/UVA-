#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
#include<utility>
#include<algorithm>

#define M 100000000000000

#define lld long long int

using namespace std;

vector< pair<lld,lld> > con[20005] ;
lld visit[20005];

lld bfs(lld f, lld t)
{
    memset(visit, 0, sizeof(visit));
    queue< pair<lld, lld> > myq;
    pair<lld, lld> node;
    lld i, x, nx, l, ret=M, s, lat;

    myq.push( make_pair(f, 0) );
    while(!myq.empty())
    {
        node = myq.front();
        myq.pop();

        x = node.first;
        l = node.second;

        if(x == t)
        {
            ret = min(ret, l);
        }

        else{
        s = con[x].size();
        for(i=0; i<s; i++)
        {
            node = con[x][i];
            nx = node.first;
            lat = node.second;

            if(visit[nx]==0)
            {
                myq.push(make_pair(nx, l+lat));
                if(nx!=t)
                    visit[nx]=1;
            }
        }
     }

    }

    return ret;
}

int main(void)
{
    lld tc, n, m, out, i, j, cn=1, x, y, lat, t, f;

    scanf("%lld",&tc);

    while(tc--)
    {
        scanf("%lld%lld%lld%lld",&n, &m, &f, &t);

        for(i=0; i<m; i++)
        {
            scanf("%lld%lld%lld",&x,&y,&lat);

            con[x].push_back(make_pair(y, lat));
            con[y].push_back(make_pair(x, lat));

        }

        printf("Case #%lld: ", cn++);
        out = bfs(f, t);

        if(out==M)
            printf("unreachable\n");
        else
            printf("%lld\n",out);

        for(i=0; i<n; i++)
            con[i].clear();
    }


    return 0;
}
