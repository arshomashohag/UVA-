#include<cstdio>


int main(void)
{
  long long int t, a, b;

scanf("%lld",&t);

while(t--)
{
    scanf("%lld%lld",&a,&b);

    if(b%a)
        printf("-1\n");
    else
        printf("%lld %lld\n",a,b);
}

    return 0;
}
