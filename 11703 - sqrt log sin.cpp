#include<cstdio>
#include<cmath>
#include<cstring>
#define lld long long int

using namespace std;
lld  in, i, j, k;
 lld save[1000006];

 lld fib(lld x)
 {
     if(x==0)
        return 1;
     if(save[x]>=0)
        return save[x];
     lld l, sqr, si;

      l = floor( log((double)x) );
      sqr = floor( (double)x - sqrt( (double)x ) );
      si = floor( (double)x*(sin((double)x))*(sin((double)x)) );

      save[x] = (fib(l) + fib(sqr) + fib(si)) %1000000;

      return save[x];

 }


int main(void)
{
    memset(save, -1, sizeof(save));
    while(scanf("%lld",&in) && in>=0)
    {
       printf("%lld\n", fib(in));
    }

    return 0;
}
