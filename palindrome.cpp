#include<cstdio>
#define lld long long int


int ispalindrome(lld a)
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
        return 1;
    else
       return 0;
}

int main(void)
{
    lld i;
    int check;

    while(scanf("%lld",&i)==1)
    {
        check=ispalindrome(i);
        printf("\n%d\n",check);
        if(check)
            printf("Yes");
        else
            printf("No");

        printf("\n");
    }
}
