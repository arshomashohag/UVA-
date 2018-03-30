#include<cstdio>
#include<algorithm>

using namespace std;

long long int a[1003],b[1003];
int n,i,j,cnt,out;
int main(void)
{
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }

        sort(b,b+n);
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(b[i]!=a[i])
                {
                  for(j=i;j<n;j++)
                  {
                      if(b[i]==a[j])
                      {
                          a[j]=a[i];
                          a[i]=b[i];
                          break;
                      }
                  }
                  cnt++;
                }
        }
            printf("Minimum exchange operations : %d\n",cnt);

    }
    return 0;
}
