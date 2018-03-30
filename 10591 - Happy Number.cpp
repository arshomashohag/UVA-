#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;


long long int t, n, i, j=1, k, num;
bool flag;
int chk[1000];

int main(void)
{
    scanf("%lld",&t);
    while(t--)
    {
     scanf("%lld",&n);
     num = n;
     memset(chk,0,sizeof(chk));
     flag = false;
     while( n && n!=1 && !flag)
     {
       i = n;
       n=0;
       while(i)
       {
           k = i%10;
           n = n + (k*k);
           i = i/10;
       }

       if(chk[n]==1)
         flag=true;

         chk[n] = 1;
      }

      if(n && !flag)
      {
          printf("Case #%lld: %lld is a Happy number.\n",j++, num );
      }

      else
      {
        printf("Case #%lld: %lld is an Unhappy number.\n",j++, num );
      }

    }

    return 0;
}
