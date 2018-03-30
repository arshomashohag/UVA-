#include<cstdio>
#include<cstring>

#define lld long long int

lld n, i, j, out , s;
bool flag;

int main(void)
{
    int ar[102];
  while(scanf("%lld",&n) && n)
    {
        flag=false;
        for(i=1;i<=13;i++)
        {
           s = n;
           memset(ar, 1, sizeof(ar));

           for(j=1;s;)
           {
             if(ar[j]==1)
             {
                 s--;
                 ar[j]=0;
             }

           }

        }

        printf("%lld\n",out);
    }


    return 0;
}
