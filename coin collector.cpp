#include<cstdio>
#include<algorithm>
#define lld long long int
using namespace std;

lld ar[1003],sum;
int i,j,t,coin,n,out;

int main(void)
{
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       for(i=0;i<n;i++)
        scanf("%lld",&ar[i]);
out=0;
j=1;
    while(ar[n-j]-1>=1)
    {
       sum=ar[n-j]-1;
        coin=1;

        for(i=n-j-1;i>=0;i--)
        {
           if(sum>=ar[i])
           {
               sum=sum-ar[i];
               coin++;
           }
        }
        j++;
      out=max(out,coin);
    }
      printf("%d",out);
      if(t>0)
        printf("\n");
   }
   return 0;
}
