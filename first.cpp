#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

#define lld long long int
#define S 107

int test,cn=1;
int i,j,n,rout[S][S][S],loc,x,y,flag;
double len;
int main(void)
{
    scanf("%d",&test);

    while(test--)
    {
      scanf("%d%d",&n,&loc);
      for(i=0;i<n;i++)
            scanf("%d%d%d",&rout[i][0][0],&rout[i][0][1],&rout[i][0][2]);

      printf("Case %d:\n",cn++);
      for(i=0;i<loc;i++)
      {
         scanf("%d%d",&x,&y);
         flag=0;
         for(j=0;j<n;j++)
         {
           len=(rout[j][0][0]- x) * (rout[j][0][0]-x)+(rout[j][0][1]-y)*(rout[j][0][1]-y);
           len=sqrt(len);
           if(len<=rout[j][0][2])
           {
               flag=1;
               printf("Yes\n");
               break;

           }
         }
         if(flag==0)
            printf("No\n");
      }

    }

  return 0;
}
