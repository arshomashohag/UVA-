#include<cstdio>
#include<cstring>
#include<algorithm>
#define lld long long int

using namespace std;

lld n,p[1005],w[1005],i,j,k,wm,m;
lld res;
int t;

lld save[1010][32];

lld dp(lld ind, lld cap)
{
    lld profit1=0,profit2=0;
    if(ind==n)
        return 0;

       if(save[ind][cap]!= -1)
            return save[ind][cap];

       if((w[ind]+cap)<=wm)
        profit1=p[ind]+dp(ind+1,cap+w[ind]);
           else
            profit1=0;

    profit2=dp(ind+1,cap);

    save[ind][cap]=max(profit1,profit2);

   return save[ind][cap];
}

int main(void)
{
  scanf("%d",&t);

  while(t--)
  {
    res=0;
      scanf("%lld",&n);

      for(i=0;i<n;i++)
        scanf("%lld%lld",&p[i],&w[i]);
      scanf("%lld",&m);
      for(i=1;i<=m;i++)
      {
         memset(save,-1,sizeof(save));
           scanf("%lld",&wm);
          res=res+dp(0,0);
       }
       printf("%lld\n",res);

  }

  return 0;
}
