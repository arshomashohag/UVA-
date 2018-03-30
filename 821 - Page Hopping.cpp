#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<set>
#include<utility>

using namespace std;

vector<int> page[102];
int chk[102];

int bfs(int f, int t)
{
    memset(chk, 0, sizeof(chk));

    queue< pair<int, int> > myq;
    pair<int, int> node;

    int  x, i, s, l = 0;

    myq.push(make_pair(f, 0));

    chk[f]=1;
    while(!myq.empty())
    {
        node = myq.front();
        f = node.first;
         l = node.second;
     myq.pop();

         if(f==t)
            return l;

         s = page[f].size();

         for(i=0; i<s; i++)
         {
           x = page[f][i];

           if(chk[x]==0)
           {
               myq.push( make_pair(x, l+1));
               chk[x]=1;
           }
         }
    }
    return -1;
}


int main(void)
{
  int t, f, out, x, ar[102], i, j, k, sb, sa, cn=1, cal;
  set<int> node;
  double pr;

  while(scanf("%d%d",&f,&t) && (f && t))
  {
      page[f].push_back(t);
      node.insert(f);
      node.insert(t);
      ar[0]=f;
      ar[1]=t;
      i=2;
      while(scanf("%d%d",&f,&t) && (f && t))
      {
          page[f].push_back(t);

          sb = node.size();
          node.insert(f);
          sa = node.size();

          if(sb!=sa)
            ar[i++]=f;

          sb = node.size();
          node.insert(t);
          sa = node.size();

          if(sb!=sa)
            ar[i++]=t;
      }

    out = 0;
    cal = 0;
    for(j=0; j<i; j++)
    {
       f = ar[j];
       for(k=0; k<i; k++)
       {
          if(j!=k)
          {
               t = ar[k];
               cal++;
               out = out + bfs(f, t);
           }
       }
    }

 pr = (double)out/(double) cal;


  printf("Case %d: average length between pages = %0.3lf clicks\n",cn++, pr);

  for(i=0; i<101; i++)
  {
    page[i].clear();
  }
  node.clear();
  }

    return 0;
}
