#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<utility>
#define lld long long int

using namespace std;

int visit[10][10];

int xc[]={1,2,2,1,-1,-2,-2,-1};
int yc[]={2,1,-1,-2,-2,-1,1,2};

int bfs(int x, int y, int a, int b)
{
    queue< pair< int, pair<int, int> > > myq;
    pair< int, pair<int, int> > node;
    int l, i, j, xi, yj, nx, ny, ret=0;

    node = make_pair(0, make_pair(x,y));
    myq.push(node);
    visit[x][y]=1;

    while(!myq.empty())
    {
        node = myq.front();
        l = node.first;
        nx = node.second.first;
        ny = node.second.second;
        myq.pop();

        if(nx==a && ny==b)
        {
            ret = l;
            break;
        }

        for(i=0; i<8; i++)
        {
          xi = xc[i]+nx;
          yj = yc[i]+ny;

          if(xi>=0 && xi<8 && yj>=0 && yj<8 && visit[xi][yj]==0 )
          {
              myq.push(make_pair(l+1, make_pair(xi,yj)));
              visit[xi][yj]=1;
          }
        }
    }


    return ret;
}


int main(void)
{
   char in[10];
   int x1, x2, y1, y2, out;


   while(scanf("%[^\n]",in)==1)
   {
    memset(visit, 0, sizeof(visit));

     y1=in[0]-'a';
     x1=(in[1]-'0');

     y2=in[3]-'a';
     x2=(in[4]-'0');

     out = bfs(x1-1,y1,x2-1,y2);

     printf("To get from %c%d to %c%d takes %d knight moves.\n",y1+'a', x1, y2+'a', x2, out);

    getchar();

   }


    return 0;
}
