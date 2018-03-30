#include<bits/stdc++.h>

#define lld long long int

using namespace std;

char grid[102][102], c;
lld n, m;

int dirx[]={0,0,1,-1};
int diry[]={1,-1,0,0};

void bfs(lld x, lld y)
{
  queue< pair<lld, lld> > myq;
  pair<lld, lld> node;

  lld a, b, i, j;
  myq.push(make_pair(x, y));
  grid[x][y]='.';

  while(!myq.empty())
  {
      node = myq.front();
      myq.pop();

      a = node.first;
      b = node.second;

      for(i=0; i<4; i++)
      {
          x = a + dirx[i];
          y = b + diry[i];

          if(x>=0 && x<n && y>=0 && y<n && (grid[x][y]=='x' || grid[x][y]=='@'))
          {
              grid[x][y]='.';
              myq.push(make_pair(x, y));
          }
      }
  }

}

int main(void)
{
  lld i, j, k, out, t, cn=1;


 scanf("%lld",&t);

 while(t--)
 {
     scanf("%lld",&n);
     getchar();

     for(i=0; i<n; i++)
     {

         for(j=0; j<n; j++)
         {
             scanf("%c",&grid[i][j]);
         }
         grid[i][j]='\0';
         getchar();
     }

     out=0;

     for(i=0; i<n; i++)
     {
         for(j=0; j<n; j++)
         {
           if(grid[i][j]=='x')
                {
                    out++;
                    bfs(i, j);
                }
         }
     }
     printf("Case %lld: %lld\n", cn++, out);
 }

    return 0;
}
