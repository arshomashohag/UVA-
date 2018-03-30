#include<cstdio>
#include<iostream>

#define lld long long int

using namespace std;

char grid[102][102];
lld i, j, k, n, m, out;
int ac[10]={0,1,1,1,0,-1,-1,-1};
int bc[10]={1,1,0,-1,-1,-1,0,1};


void dfs(lld x, lld y)
{
   grid[x][y]='*';
   int a, px, py;

   for(a=0;a<8;a++)
   {
       px=x+ac[a];
       py=y+bc[a];

       if( (px<n && px>=0) && (py<m && py>=0) && (grid[px][py]=='@') )
        dfs(px, py);
   }

}

int main(void)
{
   while(scanf("%lld%lld",&n,&m) && (n&&m))
   {
    getchar();

    for(i=0; i<n; i++)
    {
      scanf("%[^\n]",grid[i]);
      getchar();
    }
    out = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if( grid[i][j]=='@' )
            {
                out++;
                dfs(i, j);
            }
        }
    }


    printf("%lld\n",out);
   }

    return 0;
}
