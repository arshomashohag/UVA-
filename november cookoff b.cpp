#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int ar_in[][3]={{1,4,5},{0,2,6},{1,3,7},{2,4,8},{0,7,8},{0,3,9},{1,8,9},
                  {2,5,9},{3,5,6},{4,6,7}};
long long int i,j,k;
int t,flag,host;
char ar[100002];
int out[100005],x;

int main(void)
{
  scanf("%d",&t);
  getchar();
  while(t--)
  {
      scanf("%[^\n]",ar);
      x=0;
      for(i=0;ar[i+1];i++)
      {
        host=ar[i]-65;
        j=i+1;
        flag=0;
        for(k=0;k<3;k++)
        {
            printf("%d ",ar_in[host][k]);
            if(ar_in[host][k]==(ar[j]-65) || ar_in[host][k]==(ar[j]-60))
               {
                  flag=1;
                  break;
               }
        }
        if(!flag)
        {
          host=ar[i]-60;
           for(k=0;k<3;k++)
        {
             printf("%d ",ar_in[host][k]);
            if((ar_in[host][k]==(ar[j]-65)) || (ar_in[host][k]==(ar[j]-60)))
               {
                  flag=1;
                  break;
               }
        }
        }

        if(flag==1)
            out[x++]=host;
            else
                break;
      }
     if(flag==0)
     {
         printf("-1\n");
     }
     else
     {
        for(i=0;i<x;i++)
        printf("%d",out[i]);

        printf("\n");
     }
    getchar();
  }
  return 0;
}
