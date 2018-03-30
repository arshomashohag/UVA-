#include<cstdio>

using namespace std;

long long int k, a, t, sum, i;
bool flag, one;
int main(void)
{

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&k);
        sum=0;
      flag = 0;
      one = 0;
        for(i=1;i<=k;i++)
          {
           scanf("%lld",&a);
           if(a==0)
            flag = 1;
           if(a==1)
            one = 1;

            sum = sum + a;
          }


      if(!one || sum == 0 || k == 1 || (flag == 0 && sum == k) )
        printf("Better luck next time!\n");
      else
        printf("Happy Birthday Tutu!\n");
    }

    return 0;
}
