#include<cstdio>
#include<cmath>

using namespace std;
int x1,x2,x,yl,y2,y,t,cn=1,m,i;


int main(void)
{
 scanf("%d",&t);
 while(t--)
 {
     scanf("%d%d%d%d%d",&x1,&yl,&x2,&y2,&m);

     printf("Case %d:\n",cn++);
     while(m--)
     {
      scanf("%d%d",&x,&y);

      if((x>=x1&&x<=x2) && (y>=yl && y<=y2))
        printf("Yes\n");
      else
        printf("No\n");
     }
 }
 return 0;
}
