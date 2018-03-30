#include <stdio.h>
#include <math.h>

int bigmod(long long a,long long int p,long long int m )
{
    long long int c;
    if (p==0)return 1;
    if (p&1)
    {
        return ((a%m)*(bigmod(a,p-1,m )))%m;
    }
    else
    {
        c = bigmod ( a, p / 2, m );
        return ( c * c ) % m;
    }
}

int main()
{
    long long int i,j,k,n,t,r;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        for(r=1;r<=n;r++)
        {
            scanf("%lld %lld %lld",&i,&j,&k);
            t=bigmod(i,j,k);
            printf("%lld\n",t);
        }
    }
   return 0;
}
