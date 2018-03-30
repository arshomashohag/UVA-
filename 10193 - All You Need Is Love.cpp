#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define lld long long int
using namespace std;

char ar[50], ch;
lld n, num1, num2, sqr, i, l, base, cn=1;
bool flag;

lld gcd(lld a, lld b)
{
    return b==0 ? a : gcd(b, a%b);
}

int main(void)
{
    scanf("%lld",&n);

  getchar();

  while(n--)
  {
    scanf("%s",ar);
    l = strlen(ar) - 1;

    num1=0;
    base = 1;
    for(i=l;i>=0;i--)
    {
       num1 = num1 + (base*( ar[i]-48 ));
       base = base*2;
    }
    getchar();

    scanf("%s",ar);
    l = strlen(ar) - 1;

    num2=0;
    base = 1;
    for(i=l;i>=0;i--)
    {
       num2 = num2 + (base*( ar[i]-48 ));
       base = base*2;
    }
    getchar();


    if(gcd(num1,num2)>1)
    {
      printf("Pair #%lld: All you need is love!\n",cn++);
    }
    else
    {
        printf("Pair #%lld: Love is not all you need!\n", cn++);
    }

 }

    return 0;
}
