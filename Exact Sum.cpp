#include<cstdio>
#include<algorithm>
using namespace std;

long long n,ar[10003],m,i,j,oi,oj,mint,temp,dif;

int main(void)
{
    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        scanf("%lld",&m);
        mint=1000002;
        for(i=0;i<n-1;i++)
        {
         for(j=i+1;j<n;j++)
         {
             if(ar[i]+ar[j]==m)
             {
                dif=ar[i]>ar[j]?ar[i]-ar[j]:ar[j]-ar[i];

                if(dif<mint)
                {
                    mint=dif;
                   if(ar[i]<ar[j])
                   {
                    oi=ar[i];
                    oj=ar[j];
                   }
                   else
                   {
                      oi=ar[j];
                    oj=ar[i];
                   }
                }
             }
         }
        }
       printf("Peter should buy books whose prices are %lld and %lld.\n\n",oi,oj);
    }
    return 0;
}
