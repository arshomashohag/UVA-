#include<cstdio>
#include<cmath>

int mp,lp,out,t,dif,cn=1;

int main(void)
{
    scanf("%d",&t);
    while(t--)
    {
        out=2*5+3*3;
        scanf("%d%d",&mp,&lp);
        dif=mp>lp?mp-lp : lp-mp;
        out=out+(dif+mp)*4;

        printf("Case %d: %d\n",cn++,out);
    }
   return 0;
}
