#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<cstdlib>
#include<list>
#include<cctype>
#define M 3000000
#define lld long long int


using namespace std;

char dungeon[32][32][32];
lld l, r, c, i, j, k, x, y, z, a;

int xi[]={0,1,0,-1,0,0};
int yj[]={1,0,-1,0,0,0};
int zk[]={0,0,0,0,1,-1};


lld dfs(int ia, int jb, int kc, int c)
{
  if(dungeon[ia][jb][kc]=='#')
  return M;
  if(dungeon[ia][jb][kc]=='E')
    return 1;

  lld r=M ;
  int x, y, z;


  for(int s=0; s<6; s++)
  {
      x=zk[s]+ia;
      y=xi[s]+jb;
      z=yj[s]+kc;

     if(x>=0 && x<l && y>=0 && y<r && z>=0 && z<c);
        r = min(dfs( x, y, z, c+1 ), r);
  }

  return (r+c);
}


int main(void)
{
bool flag;

    while(scanf("%lld%lld%lld",&l,&r,&c) && (l && c && r) )
    {

     flag = false;

      for(i=0; i<l; i++)
      {
          for(j=0; j<r; j++)
          {
           // scanf("%[^\n]",dungeon[i][j]);
           cin>>dungeon[i][j];

             printf("%lld %lld\n",i, j);
            if(!flag)
            for(a=0; a<c; a++)
            if(dungeon[i][j][a]=='S')
            {
              x = i;
              y = j;
              z = a;
              flag = true;
              break;
            }
          }

     }

      k = dfs(x, y, z, 0);

      if(k<M)
        printf("Escaped in %lld minute(s).\n",k);
      else
        printf("Trapped!\n");

  }

    return 0;
}



