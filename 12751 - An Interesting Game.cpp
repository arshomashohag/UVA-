#include<cstdio>
#include<iostream>
#define lld long long int

using namespace std;



int main(void)
{
 lld t, n, k, x,i, kodu, s, out, cn=1;

 scanf("%lld",&t);

 while(t--)
 {
     scanf("%lld%lld%lld",&n, &k, &x);
     s = (n*(n+1))/2;
     kodu=0;

     for(i=0; i<k; i++, x++)
        kodu = kodu+x;

        out = s-kodu;
     printf("Case %lld: %lld\n",cn++,out);
 }


    return 0;
}
