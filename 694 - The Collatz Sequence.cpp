#include<cstdio>
#include<cmath>


long long int l,m,cn=1,cnt,i,lo;

int main(void)
{
  while(scanf("%lld%lld",&l,&m) && (l>=0 && m>=0))
  {
      cnt=0;
      lo=l;
    while(l!=1 && l<=m)
    {
        cnt++;
        if(l%2)
            l=l*3+1;
        else if(l%2==0)
            l=l/2;

    }
    if(l==1)
        cnt++;
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cn++,lo,m,cnt);

  }
  return 0;
}
