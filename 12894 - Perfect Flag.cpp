#include<cstdio>
#include<cmath>

using namespace std;

lld x1, x2, ya, yb, cx, cy, r, t, l, w;

int main(void)
{
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld%lld%lld%lld%lld",&x1,&ya,&x2,&yb,&cx,&cy,&r);

        l = x2-x1;
        w = yb-ya;



        if((l*6)==(w*10) && (l/r)==5 && )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
