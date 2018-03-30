#include<cstdio>
#include<iostream>
#include<cstring>
#define lld long long int
using namespace std;

long long int n, i, j, G, s;

lld save[501][502];


lld gcd(lld a, lld b)
{
  return  ( b==0 ? a : gcd(b, a%b));
}

int main(void)
{
  memset(save, 0, sizeof(long long int));

  while(scanf("%lld",&n) && n)
  {
      G=0;
      for(i=1; i<n; i++)
      {
          for(j=i+1; j<=n; j++)
          {
             if(save[i][j]==0)
                save[i][j]=gcd(i,j);

             G = G+ save[i][j];
          }
      }
      printf("%lld\n",G);
  }

  return 0;

}
