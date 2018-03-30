#include<cstdio>
#include<cmath>
#include<cstdlib>
#define lld long long int

using namespace std;

lld n, out,t;

int main(void)
{

scanf("%lld",&t);
while(t--)
{

scanf("%lld",&n);

 out = (sqrt(8*n+1)-1)/2;

    printf("%lld\n",out);
}

    return 0;
}
