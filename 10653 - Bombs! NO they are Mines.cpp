#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
#include<utility>
#define lld long long int

using namespace std;

 int ar[1001][1001];
int xi[]={0,1,0,-1};
int yi[]={1,0,-1,0};
lld r, c, a, i, j,nrb, nbc, rb, x1, x2, y1, y2, out;



lld bfs(lld x1, lld y1, lld x2, lld y2)
{
  lld l, i, j, x, y, px, py, ret= 0;
  pair< lld, pair<lld, lld> > node;

  queue< pair< lld, pair<lld, lld> > > myq;
   l=0;

   myq.push( make_pair(l, make_pair(x1,y1)));
   ar[x1][y1]=1;

   while(!myq.empty())
   {
       node = myq.front();
       myq.pop();

       l = node.first;
       x = node.second.first;
       y = node.second.second;

       if(x==x2 && y==y2)
        return l;

       for(i=0; i<4; i++)
       {
         px = x + xi[i];
         py = y + yi[i];

         if(px>=0 && px<r && py>=0 && py<c && ar[px][py]!=1)
         {
             ar[px][py]= 1;
             myq.push( make_pair( l+1, make_pair(px, py) ) );
         }
       }
   }

  return r;
}

int main(void)
{
  while(scanf("%lld%lld",&r,&c) &&(r && c))
  {
      scanf("%lld",&nrb);

      memset(ar, 0, sizeof(ar));

      for(a=1; a<=nrb; a++)
      {
          scanf("%lld",&rb);
          scanf("%lld",&nbc);

          for(j=1; j<=nbc; j++)
          {
             scanf("%lld",&i);
             ar[rb][i]=1;
          }
      }
      scanf("%lld%lld",&x1,&y1);
      scanf("%lld%lld",&x2,&y2);

     printf("%lld\n",bfs(x1,y1,x2,y2));
  }


    return 0;
}
