#include<cstdio>
#include<iostream>
#define lld long long int

using namespace std;

 lld t, n, out;

 lld rep(lld i)
 {
   if(i<=2)
    return 1;

   if(i%2)
    return (1 + rep(i/2) );

   return rep(i/2);
 }

int main(void)
{
  scanf("%lld",&t);

  while(t--)
  {
      scanf("%lld",&n);
      out = rep(n);

      printf("%lld\n",out);
  }

    return 0;
}
