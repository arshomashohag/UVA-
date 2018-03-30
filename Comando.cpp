#include<bits/stdc++.h>

#define INF 100000;
using namespace std;

int road[102][102];


int main(void)
{
int t, cn=1, i, j, x,y, n, r, out, k;

scanf("%d",&t);

while(t--)
{
  scanf("%d%d",&n,&r);

  for(i=0; i<n; i++)
  {
      for(j=0; j<n; j++)
      {
          if(i!=j)
            {
                road[i][j]=INF;
            }

          else
            road[i][j]=0;
      }
  }

  for(i=1; i<=r; i++)
  {
   scanf("%d%d",&x,&y);
   road[x][y]=1;
   road[y][x]=1;
  }

  scanf("%d%d",&x, &y);


  for(k=0; k<n; k++)
  {
      for(i=0; i<n; i++)
      {
          for(j=0; j<n; j++)
          {
              road[i][j] = min(road[i][j], (road[i][k]+road[k][j]));
          }
      }
  }

  out = 0;

  for(i=0; i<n; i++)
  {
      out = max(out, (road[x][i]+road[i][y]));
  }

  printf("Case %d: %d\n", cn++, out);
}

    return 0;
}
