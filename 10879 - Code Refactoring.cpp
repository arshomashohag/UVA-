#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<bitset>
#include<cmath>
#define lld long long int

using namespace std;


lld in, t, cn=1, i, lim, n ;

lld out[5], a;


int main(void)
{

scanf("%lld",&t);
while(t--)
{
  scanf("%lld",&in);

  lim = sqrt(in);
  a=0;

   for(i=2; i<=lim; i++)
   {
        if(in%i==0)
        {
            out[a++]=i;
            out[a++]=in/i;
        }
   }

  printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",cn++,in,out[0],out[1],out[2],out[3]);
}

    return 0;
}
