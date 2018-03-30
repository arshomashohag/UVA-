#include<cstdio>
#include<cstring>
#define lld long long int

lld save[100];

lld fib(lld a)
{
    if(save[a]!=0)
        return save[a];

    if(a==1)
        return 1;
    if(a==2)
      return 2;
    lld ret;

    ret = fib(a-1)+fib(a-2);
    save[a]=ret;
    return ret;
}


int main(void)
{
memset(save, 0, sizeof(save));
save[1]=1;
save[2]=2;

lld in;
while(scanf("%lld",&in) && in)
{
    printf("%lld\n",fib(in));
}

    return 0;
}
