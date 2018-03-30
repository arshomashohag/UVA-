#include<cstdio>

using namespace std;

long long int n,m,i,j,out,t;

int main(void)
{

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld",&n,&m);

         i=n/3;
         j=m/3;

         out = i*j;
         printf("%lld\n",out);
    }

    return 0;
}
