#include<cstdio>
#include<cmath>
#include<cstdlib>
#define lld long long int

using namespace std;


lld gcd(lld a, lld b)
{
    return b==0 ? a : gcd(b, a%b);
}

lld lcm(lld a, lld b)
{
    return a*( b/gcd(a,b) );
}

int main(void)
{
    lld s, n, i, j, lc, out, gc, cn=1;
    lld ar[14];

    scanf("%lld",&s);
    while(s--)
    {
        scanf("%lld",&n);
        lc = 1;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&ar[i]);
            lc = lcm(lc, ar[i]);
        }
        out = 0;
        for(i=0; i<n; i++)
        {
            out =out+lc/ar[i];
        }
        lc=lc*n;

       gc = gcd(lc, out);

       printf("Case %lld: %lld/%lld\n",cn++,lc/gc, out/gc);
    }
}
