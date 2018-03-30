#include<cstdio>
#include<algorithm>

using namespace std;

long long int n,q,qt,cn=1,i,j,ar[10002],flag,k;

int main(void)
{
  while(scanf("%lld%lld",&n,&q) && (n || q))
  {
    for(i=0;i<n;i++)
        scanf("%lld",&ar[i]);

   sort(ar,ar+n);
     printf("CASE# %lld:\n",cn++);
    for(i=0;i<q;i++)
    {
      flag=0;

      scanf("%lld",&qt);
      for(j=0;j<n;j++)
      {
        if(ar[j]==qt)
        {
           flag=1;
           printf("%lld found at %lld\n",qt,j+1);
           break;
        }
      }
      if(!flag)
        printf("%lld not found\n",qt);
    }
  }
  return 0;
}
