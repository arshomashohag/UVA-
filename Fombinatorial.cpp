#include<cstdio>
#include<cmath>
#define lld long long int

#define Max 1000000000000
using namespace std;

lld n,m,q,i,r;
lld on,our,onr;
lld out,temp;
int t;
lld save[1000000]={0};

lld power(lld a)
{
  lld x=1,ret=1;
  while(x<=a)
  {
      ret=ret*a;
      if(ret>Max)
        ret=ret%Max;
      x++;
  }
  return ret;
}

int main(void)
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&n,&m,&q);

         while(q--)
         {
             scanf("%lld",&r);
             on=1;
             our=1;
             onr=1;

             for(i=1;i<=n;i++)
             {
                 on=on*power(i);
                 if(on>Max)
                    on=on%Max;
             }
             for(i=1;i<=r;i++)
             {
                 our=our*power(i);
                 if(our>Max)
                    our=our%Max;
             }
             for(i=1;i<=n-r;i++)
             {
                 onr=onr*power(i);
                  if(onr>Max)
                    onr=onr%Max;
             }

              out=on/((onr*our)%Max);


             printf("%lld\n",out%m);
         }
    }
    return 0;
}
