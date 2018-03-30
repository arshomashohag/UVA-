#include<cstdio>
#include<cstring>
#define MOD 10000000000007
#define lld long long int

using namespace std;

lld res;
int n,m,l,t,cn=1,i;

lld arr[10004];

lld fact(int in,int r)
{
  int lim=in-r,temp;
  lld ret=1;

  lim++;

    temp=lim;
 while(lim<=in)
  {
      if(arr[lim]!=0)
       {
        arr[temp]=(arr[lim]*ret)%MOD;
        return arr[temp];
       }
    ret=(ret*lim)%MOD;
    lim++;
  }

arr[temp]=ret;
return ret;
}

int main(void)
{
  scanf("%d",&t);
  while(t--)
  {
     scanf("%d%d%d",&l,&m,&n);
     res=0;
     memset(arr,0,sizeof(arr));
     for(m;m<=n;m++)
     {
       res=(res+fact(n,m))%MOD;
     }
     printf("Case %d: %lld\n",cn++,res);
  }
  return 0;
}
