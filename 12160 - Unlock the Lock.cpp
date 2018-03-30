#include<bits/stdc++.h>

using namespace std;

int chk[10002];
int button[12];

void bfs(int l, int u, int r)
{
    queue< pair<int , int> > myq;
    pair<int, int> node;
    int i, j, x, y, a, b;


    memset(chk, 0, sizeof(chk));
    myq.push(make_pair(l,0));
    chk[l]=1;

    while(!myq.empty())
    {
      node = myq.front();
      myq.pop();

      x = node.first;
      y = node.second;

      if(x==u)
      {
          printf("%d\n", y);
          return ;
      }

      for(i=0; i<r; i++)
      {
        a = (x + button[i])%10000;

        if(chk[a]==0)
        {
            chk[a]=1;
            myq.push(make_pair(a,y+1));
        }
      }

    }
  printf("Permanently Locked\n");

}


int main(void)
{
 int  l, u, r, i, cn=1;

 while(scanf("%d%d%d",&l, &u, &r) && (l || r || u))
 {
     for(i=0; i<r; i++)
        scanf("%d",&button[i]);

     printf("Case %d: ", cn++);
     bfs(l, u, r);
 }

    return 0;
}
