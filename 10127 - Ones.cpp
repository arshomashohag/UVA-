#include<cstdio>
#include<iostream>

using namespace std;

long long int n,  r, d;

int main(void)
{

  while(scanf("%lld",&n)==1)
  {

      d=1;
      r=d%n;

      while(r)
      {
       r = (r*10) + 1;
       d++;
       if(r>=n)
            r = r%n ;
      }

      printf("%lld\n",d);
  }

    return 0;
}
