#include<cstdio>
#include<cmath>
#include<algorithm>
#define lld long long int
#define AS 1000010

using namespace std;

lld  x[AS],y[AS],pr[AS],N,k,i,j,profit;
int test,cn;

int main(void)
{
    scanf("%d",&test);
    for(cn=1;cn<=test;cn++)
    {
        scanf("%lld%lld",&N,&k);

        for(i=0;i<N;i++)
            scanf("%lld",&x[i]);
        for(i=0;i<N;i++)
        {
            scanf("%lld",&y[i]);
            pr[i]=y[i]-x[i];
        }

        sort(pr,pr+N);
        profit=0;
        for(i=0;i<N;i++)
        {

           if(pr[i]>0 || k<=0)
            profit=profit+pr[i];

           else
            k--;
         }

        if(profit>0)
            printf("Case %d: %lld\n",cn,profit);
        else

        printf("Case %d: No Profit\n",cn);
    }

}
