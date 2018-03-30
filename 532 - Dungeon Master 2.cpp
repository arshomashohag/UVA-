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


lld l, r, c, i, j, x, y, z, a, out;
char dungeon[31][31][32];
 int visit[31][31][32];

int xi[]={0,0,0,0,1,-1};
int yj[]={0,1,0,-1,0,0};
int zk[]={1,0,-1,0,0,0};


lld dfs(int i, int j, int k, int cost)
{
    if(dungeon[i][j][k]=='#')
        return M;

    if(dungeon[i][j][k]=='E')
        return cost;

    visit[i][j][k]=1;

    lld a, ret, x, y, z;
    ret=M;

    for(a=0; a<6; a++)
    {
        x = xi[a]+i;
        y = yj[a]+j;
        z = zk[a]+k;

        if( (x>=0 && x<l) && (y>=0 && y<r) && (z>=0 && z<c) && visit[x][y][z]==0)
            ret = min(dfs(x,y,z,cost+1), ret);

    }

   return ret;
}


int main(void)
{
   bool flag;

    while(scanf("%lld%lld%lld",&l,&r,&c) &&(l && r && c))
    {

     flag = false;
     x=y=z=0;
   memset(visit, 0, sizeof(visit));

     for(i=0; i<l; i++)
     {
         for(j=0; j<r; j++)
         {
             getchar();
             scanf("%[^\n]",dungeon[i][j]);

             for(a=0; !flag && a<c; a++)
             {
                 if(dungeon[i][j][a]=='S')
                 {
                    x=i;
                    y=j;
                    z=a;
                    flag=true;
                    break;
                 }
             }
         }
    getchar();
   }


   out = dfs(x, y, z, 0);

   if(out<M)
    printf("Escaped in %lld minute(s).\n",out);
   else
    printf("Trapped!\n");

    }

    return 0;
}



