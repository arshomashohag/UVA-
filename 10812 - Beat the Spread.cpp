#include<cstdio>
#include<cstdlib>

using namespace std;

long long int  t, sum, dif, out, temp;

int main(void)
{
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld",&sum,&dif);

        out = (sum + dif);

        if(out%2==1 || (sum<dif))
        {
          printf("impossible\n");
        }

        else
        {
            out = sum - (out /2);
            temp = sum - out;

            if(temp>out)
                printf("%lld %lld\n",temp,out);
            else
                printf("%lld %lld\n",temp,out);
        }

    }

    return 0;
}
