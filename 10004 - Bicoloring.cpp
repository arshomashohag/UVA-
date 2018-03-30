#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<queue>
#include<utility>

#define lld long long int

using namespace std;

vector<int> graph[201];
int color[202];

bool bfs(int a)
{
  queue< pair<int, int> > col;
  pair<int, int> node;
  int n, c, nx, cx, i, ads;

  memset(color, -1, sizeof(color));

  col.push(make_pair(a,0));
  color[a]=0;

  while(!col.empty())
  {
      node = col.front();
      n = node.first;
      c = node.second;
      col.pop();

      ads = graph[n].size();

      for(i=0; i<ads; i++)
      {
          nx = graph[n][i];

          if(color[nx]<0)
          {
            col.push(make_pair( nx, !c ));
            color[nx] = !c;
          }
          else
          {
            if(color[nx]==c)
                return false;
          }
      }

  }

  return true;
}


int main(void)
{
  int a, b, i, j, n, edgn;
  bool out;

  while(scanf("%d",&n) && n)
  {
      scanf("%d",&edgn);

      scanf("%d%d",&a,&b);
      i = a;
      j = b;
      edgn--;

      graph[i].push_back(j);
      graph[j].push_back(i);

      while(edgn--)
      {
          scanf("%d%d",&a,&b);
          graph[a].push_back(b);
          graph[b].push_back(a);
      }

      out = bfs(i);

      if(out)
        printf("BICOLORABLE.\n");
      else
        printf("NOT BICOLORABLE.\n");

     for(i=0; i<n; i++)
        graph[i].clear();
  }

    return 0;
}
