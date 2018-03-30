#include<cstdio>
#include<cmath>

int i,j,n,m,riv,temp,t,cn=1,in,x,y;
int ar[100];
char c;

int main(void)
{
  scanf("%d",&t);
    while(t--)
    {

      scanf("%d%d",&n,&m);
      for(i=0;i<n;i++)
      {
       scanf("%d",&ar[i]);
      }
      getchar();
      riv=0;

      for(i=1;i<=m;i++)
      {
         scanf("%c",&c);

         if(c=='S')
            {
                scanf("%d",&in);
                for(j=0;j<n;j++)
                    ar[j]=ar[j]+in;
            }

         else if(c=='M')
            {
                scanf("%d",&in);
                  for(j=0;j<n;j++)
                    ar[j]=ar[j]*in;
            }

        else if(c=='D')
            {
                scanf("%d",&in);
                 for(j=0;j<n;j++)
                    ar[j]=ar[j]/in;
            }

            else if(c=='R')
            {
            riv++;
            }

        else if(c=='P')
            {
                scanf("%d%d",&x,&y);
                temp=ar[x];
                ar[x]=ar[y];
                ar[y]=temp;
            }

        getchar();
      }

      printf("Case %d:\n",cn++);

      j=riv%2;


      if(j!=0)
        for(i=n-1;i>=0;i--)
         {
             printf("%d",ar[i]);
             if(i>0)
             printf(" ");
         }

     else
     for(i=0;i<n;i++)
      {
        printf("%d",ar[i]);
        if(i != (n-1))
            printf(" ");
       }

      printf("\n");
    }
    return 0;
}
