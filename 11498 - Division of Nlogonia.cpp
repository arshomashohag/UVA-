#include<cstdio>
#include<iostream>
#include<cmath>
#define lld long long int

int main(void)
{
    lld xc, yc, x, y, i, j, out, k;

    while(scanf("%lld",&k) && k)
    {
        scanf("%lld%lld",&xc, &yc);
        while(k--)
        {
            scanf("%lld%lld",&x,&y);
            if(xc==x || yc==y)
                printf("divisa\n");

            else if(x>xc && y>yc)
                printf("NE\n");
            else if(x>xc && y<yc)
                printf("SE\n");
            else if(x<xc && y>yc)
                printf("NO\n");
            else if(x<xc && y<yc)
                printf("SO\n");
        }

    }
    return 0;
}
