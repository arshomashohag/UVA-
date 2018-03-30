#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

char ar[50], ch;
long long int n, sqr, i,  cn;
bool flag;

int main(void)
{
    while(scanf("%lld",&n) && n)
    {
        sqr = sqrt(n);
        cn=0;
        for(i=2;i<=sqr;i++)
            if(n%n==0)
              cn=cn+2;

      printf("%lld\n",(n-cn));

    }


    return 0;
}

