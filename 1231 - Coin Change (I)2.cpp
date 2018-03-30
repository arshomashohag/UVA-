#include<cstdio>
#include<cstring>
#define lld long long int
#define MOD 100000007

lld n,k,save[53][1003],i,j,res;
lld A[1003],Coin[1003];
int t,c,check;

lld dp(lld ind, lld cap)
{

  if(ind>=n)
    {
       if(cap==k)
       return 1;

       else
        return 0;
    }
  if(cap>k)
    return 0;
  if(cap==k)
    return 1;

 if(save[ind][cap]!= -1)
    return save[ind][cap];

lld ret1=0;

       for(check=1;check<=Coin[ind];check++)
       {
           if((cap+A[ind]*check)<=k)
            ret1+=dp(ind+1, cap+A[ind]*check)%MOD;
           else
            break;
       }

 ret1+= dp(ind+1,cap)%MOD;
save[ind][cap]=ret1%MOD;

 return save[ind][cap];
}

int main(void)
{
  scanf("%d",&t);

   for(c=1; c<=t; c++)
   {
       memset(save,-1,sizeof(save));

       scanf("%lld%lld",&n,&k);
       for(i=0;i<n;i++)
           scanf("%lld",&A[i]);

       for(i=0;i<n;i++)
        scanf("%lld",&Coin[i]);

        res=dp(0,0);

        printf("Case %d: %lld\n",c,res);
   }
   return 0;
}
