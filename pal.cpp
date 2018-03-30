#include<cstdio>
#define lld long long int


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
printf("%lld %lld\n",temp,b);

    if(temp==b)
        return true;
    else
        false;
}

int main(void)
{
    lld i;

    while(scanf("%lld",&i)==1)
    {
        if(ispalindrome(i))
            printf("Yes");
        else
            printf("No");

        printf("\n");
    }
}
