#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main(void)
{
 lld n, i, j, k,  out, cn=1, ar[20], sum;

  while(scanf("%lld",&n)==1)
  {
    for(i=0; i<n; i++)
    {
     scanf("%lld", &ar[i]);
    }

    out = 0;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            sum = 1;
            for(k=i; k<=j; k++)
            {
              sum = sum * ar[k];
            }
            out = max(out, sum);
        }
     }

    printf("Case #%lld: The maximum product is %lld.\n", cn++, out);

        printf("\n");

  }

  return 0;

}
