#include<cstdio>
#include<cmath>


#define lld long long int


lld i,j;

bool isprime(lld a)
{
    lld x=sqrt(a);
    for(;x>=2;x--)
      if(a%x==0)
      return false;

    return true;
}

bool ispalindrome(lld a)
{
    lld b=0,temp;
    int d;


    temp=a;
    while(a)
    {
     d=a%10;
     a=a/10;

     b=b*10+d;
    }


    if(temp==b)
        return true;
    else
        return false;
}

int main(void)
{
    while(scanf("%lld",&i)==1)
    {
        printf("%lld\n",2*i);

        if(isprime(i) && ispalindrome(i))
            break;


    }
    return 0;
}
