#include<bits/stdc++.h>
#define lld long long int

using namespace std;

void bangla(lld in)
{
    lld d, n;

  if(in>=10000000)
  {
    d = in/10000000;
    if(d>=100)
        bangla(d);
    else
        printf(" %lld",d);

    printf(" kuti");
    in = in % 10000000;
  }

  if(in>=100000)
  {
     d = in/100000;
     if(d>=100)
        bangla(d);
    else
        printf(" %lld",d);
    printf(" lakh");
    in = in % 100000;
  }
 if(in>=1000)
  {
     d = in/1000;
     if(d>=100)
        bangla(d);
    else
        printf(" %lld",d);

    printf(" hajar");
    in = in % 1000;
  }

  if(in>=100)
  {
     d = in/100;
    printf(" %lld shata", d);
    in = in % 100;
  }

  if(in<100 && in>0)
    printf(" %lld", in);

  if(in>=100)
  bangla(in);
}

int main(void)
{
    lld in, cn=1;

    while(scanf("%lld",&in)==1)
    {
        printf("%4lld.", cn++);
        if(in>0)
            bangla(in);
        else
            printf(" 0");
        printf("\n");
    }

    return 0;
}
