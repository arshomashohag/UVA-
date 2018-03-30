#include<cstdio>
#include<iostream>
#include<cmath>
#define lld long long int

using namespace std;

int main(void)
{
  lld n, nd, i, srt;

  while(scanf("%lld",&n) && n)
  {

      srt = sqrt(n);

      if((srt*srt) != n)
        printf("no\n");
      else
        printf("yes\n");
  }

    return 0;
}
