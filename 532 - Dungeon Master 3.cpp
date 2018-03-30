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
#include<utility>

#define M 3000000
#define lld long long int

using namespace std;


lld l, r, c, i, j, x, y, z, a, out;
char dungeon[31][31][32];
 int visit[31][31][32];

int xi[]={0,0,0,0,1,-1};
int yj[]={0,1,0,-1,0,0};
int zk[]={1,0,-1,0,0,0};

lld bfs(lld i,lld j,lld k)
{
   lld ret, x, y, z, a, cost;
   ret = M;

   pair< pair<lld,lld> , pair<lld, lld> > node, temp;

   queue< pair< pair<lld,lld> , pair<lld, lld> > > myq;

   node = make_pair( make_pair(0,i), make_pair(j,k) );
   myq.push( node );
   visit[i][j][k]=1;

   while( !myq.empty() )
   {
      temp = myq.front();

      cost= temp.first.first;
      x = temp.first.second;
      y = temp.second.first;
      z = temp.second.second;

     myq.pop();

      for(a=0; a<6; a++)
      {
        i = xi[a]+x;
        j = yj[a]+y;
        k = zk[a]+z;

        if((i>=0 && i<l) && (j>=0 && j<r) && (k>=0 && k<c) && visit[i][j][k]==0 && dungeon[i][j][k]!='#')
            {
                if(dungeon[i][j][k]=='E')
                    ret = min(ret,(cost+1));

                else{
                  node = make_pair( make_pair( cost+1, i ), make_pair( j,k ) );
                  visit[i][j][k]=1;
                 myq.push( node );
                }
             }
      }
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

           cin>>dungeon[i][j];

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
    }

   out = bfs(x, y, z);

   if(out<M)
    printf("Escaped in %lld minute(s).\n",out);
   else
    printf("Trapped!\n");

    }

    return 0;
}




