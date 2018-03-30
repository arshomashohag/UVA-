#include<cstdio>
#include<algorithm>

#define lld long long int

using namespace std;
lld sum,out;
int arm[110],are[110],i,j,n,d,r;

int main(void)
{
    while(scanf("%d%d%d",&n,&d,&r)==3)
    {
        if(!(n|| d|| r))
            break;

        for(j=0; j<n; j++)
            scanf("%d",&arm[j]);
        for(j=0; j<n; j++)
            scanf("%d",&are[j]);

        sort(arm,arm+n);
        sort(are,are+n);
        sum=0;
        i=n-1;
        for(j=0; j<n; j++,i--)
        {
            if((out=arm[j]+are[i]-d)>0)
                sum=sum+r*out;

        }

        printf("%lld\n",sum);
    }
    return 0;
}
