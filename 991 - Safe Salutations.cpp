#include<cstdio>
#include<cstring>
#define lld long long int

using namespace std;


int main(void)
{
lld n, out, i, up, down, c=1;
 while(scanf("%lld",&n)==1)
 {
     if(c>1)
        printf("\n");
      else
        c++;

     down=1;
     for(i=n; i>=1; i--)
        down*=i;

     up=1;
     for(i=(2*n); i>(n+1); i--)
        up*=i;

     out = up/down;

     printf("%lld\n",out);
 }

    return 0;
}
