#include<bits/stdc++.h>
#define lld long long int

using namespace std;

vector<int> domin[10005];
bool visit[10005];
lld bfs(lld s)
{
    queue<lld> myq;

    lld node, x, i, siz, ret=0;

    myq.push(s);
    visit[s]=1;

    while( !myq.empty())
    {
      node = myq.front();
      myq.pop();
      ret++;

      siz = domin[node].size();

      for(i=0; i<siz; i++)
      {
          x = domin[node][i];
            if(visit[x]==0)
            {
                visit[x]=1;
                myq.push(x);
            }

      }
    }

    return ret;

}


int main(void)
{
  lld t, n, m, l, i, j, x, y,z, out;

  scanf("%lld",&t);

  while(t--)
  {
    scanf("%lld%lld%lld",&n,&m,&l);

    for(i=0; i<m; i++)
    {
        scanf("%lld%lld",&x,&y);
        domin[x].push_back(y);
    }
    out = 0;
    memset(visit, 0, sizeof(visit));

    for(i=1; i<=l; i++)
    {
        scanf("%lld",&z);
        if(visit[z]==0)
            out += bfs(z);
    }

   printf("%lld\n", out);
  }

    return 0;
}
