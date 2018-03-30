#include<cstdio>
#include<cstring>

long long int a,b;
int car,cnt,sum;


int main(void)
{
    while(scanf("%lld%lld",&a,&b) && (a||b))
    {
        car=0;
        cnt=0;
        while(a || b)
        {
            if(car)
              cnt++;
           sum=(a%10) + (b%10) + car;
           car=sum/10;

           a=a/10;
           b=b/10;
        }

    if(car)
        cnt++;

    if(cnt==1)
    printf("1 carry operation.\n");
   else if(cnt>1)
    printf("%d carry operations.\n",cnt);
   else
    printf("No carry operation.\n");
    }

    return 0;
}
