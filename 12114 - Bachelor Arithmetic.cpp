#include<bits/stdc++.h>

using namespace std;

typedef long long lld;

int main(void)
{
    lld b, s, cn=1;

    while(scanf("%lld%lld",&b, &s) && (b||s))
    {
        printf("Case %lld: ",cn++);

      if(b<=1)
        printf(":-\\");
      else if(b>s)
        printf(":-(");
      else if(b<=s)
        printf(":-|");

      printf("\n");
    }

    return 0;

}

