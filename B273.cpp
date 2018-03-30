#include<cstdio>
#include<cstring>

long long int save[1000][100];

long long int ncr(long long int n, long long int r)
{
    long long int sav;
    if(r==1)
        return n;
    if(n==r)
        return 1;
        if(save[n][r]!= -1)
            return save[n][r];

     sav=ncr(n-1,r) + ncr(n-1,r-1);
     save[n][r]=sav;
     return sav;
}

int main(void)
{
  long long int n,r;
  memset(save,-1,sizeof(save));

  scanf("%lld%lld",&n,&r);

  if(n>=r)
    printf("%lld\n",ncr(n,r));
  else
    printf("Math Error.\n");

  return 0;
}
