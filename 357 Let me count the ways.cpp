#include<cstdio>
#include<cstring>
#define lld long long int

lld save[5][30003],i,j;
int cent[6]={1,5,10,25,50};


lld dp(lld ind, lld cur)
{
  if(ind >=5)
  {
    if(cur!=0)
        return 0;
    else
        return 1;
  }
   if(cur==0)
        return 1;
        if( cur<0 )
            return 0;

if(save[ind][cur]!= -1)
    return save[ind][cur];

lld ret1=0,ret2=0;

 ret1=dp( ind,cur-cent[ind] );
 ret2=dp(ind+1,cur);

 save[ind][cur]=ret1+ret2;

 return save[ind][cur];
}

int main(void)
{
    lld in,out;

    memset(save, -1 ,sizeof(save));

    while(scanf("%lld",&in)==1)
    {
        out = dp(0,in);

        if(out==1)
            printf("There is only 1 way to produce %lld cents change.\n",in);
            else
                printf("There are %lld ways to produce %lld cents change.\n",out,in);
        }

        return 0;
}
