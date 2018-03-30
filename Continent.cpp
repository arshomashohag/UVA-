#include<bits/stdc++.h>

#define lld long long int

using namespace std;

char mapd[22][22], c1, c2, c;
int dirx[]={0,0,1,-1};
int diry[]={1,-1,0,0};
lld n, m;

lld bfs(lld x, lld y)
{
  queue< pair<lld, lld> > myq;
  pair<lld, lld> node;

  lld a, b, i, j, ret=1;

  mapd[x][y]=c2;
  myq.push(make_pair(x, y));

  while(!myq.empty())
  {
      node = myq.front();
       myq.pop();
      a = node.first;
      b = node.second;

      for(i=0; i<4; i++)
      {
        x =  a + dirx[i];
        y = b + diry[i];
        if(y==m)
            y=0;
        else if(y<0)
            y=m-1;

        if(x>=0 && x<n && mapd[x][y]==c1)
        {
            ret++;
            mapd[x][y]=c2;
            myq.push(make_pair(x, y));
        }
      }

  }
  return ret;
}

int main(void)
{
 lld i, j, out, x, y;


 while(scanf("%lld%lld",&n,&m)==2)
 {
     getchar();
     c1 = '\0';
     c2 = '\0';

     for(i=0; i<n; i++)
     {
         for(j=0; j<m; j++)
         {
             scanf("%c",&mapd[i][j]);
             if(c1=='\0')
                c1 = mapd[i][j];

             if(c2=='\0' && c1 != mapd[i][j])
                c2 = mapd[i][j];
         }
         getchar();

         mapd[i][j]='\0';

     }
     scanf("%lld%lld",&x,&y);

     if(mapd[x][y]!=c1)
     {
       c = c1;
       c1 = c2;
       c2 = c;
     }
   bfs(x, y);

     out=0;

     for(i=0; i<n; i++)
     {
         for(j=0; j<m; j++)
         {
            if(mapd[i][j]==c1)
                {
                    out = max(out, bfs(i, j));

                }
         }

     }
     cout<<out<<endl;

}


}
