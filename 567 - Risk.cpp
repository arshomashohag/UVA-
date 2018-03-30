#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
#define lld long long int

using namespace std;

vector<lld> grap[24];
int visit[24];

void bfs(lld f, lld t)
{
  queue<pair<lld, lld> > myq;
  pair<lld, lld> node;

  lld x, i, j, l, out, s;
  memset(visit, 0, sizeof(visit));

  myq.push(make_pair(0,f));
  visit[f]=1;

  while(!myq.empty())
  {
      node = myq.front();

      l = node.first;
      x = node.second;
       myq.pop();

      if(x==t)
      {
          printf("%2lld to %2lld: %lld\n",f,t,l);
          return;
      }

      s = grap[x].size();

      for(i=0; i<s; i++)
      {
          j = grap[x][i];

          if(visit[j]==0)
          {
              myq.push(make_pair(l+1, j));
              visit[j]=1;
          }
      }

  }

}



int main(void)
{
 lld t, f, n, in, i, j, out, cn=1;

 while(scanf("%lld",&n)==1)
 {
     i=1;
     do{

        for(j=1; j<=n; j++)
        {
            scanf("%lld",&in);
              grap[i].push_back(in);
              grap[in].push_back(i);
        }
         i++;

     }while(i<=19 && scanf("%lld",&n));

     scanf("%lld",&n);

     for(i=1; i<=n; i++)
     {
         if(i==1)
            printf("Test Set #%lld\n",cn++);
         scanf("%lld%lld",&f,&t);
         bfs(f,t);
     }

     for(i=1; i<=20; i++)
        grap[i].clear();

         printf("\n");

 }

    return 0;
}
