#include<cstdio>
#include<cmath>
#include<iostream>
#include<bitset>
#include<vector>
#define lld long long int

using namespace std;

vector<lld> prime;

void seive()
{
    bitset<2000> bt;
    bt.set();
    prime.push_back(2);

    lld i, j, lim = sqrt(3800);
    for(i=3; i<=lim; i=i+2)
    {
        if(bt[i>>1])
        {
            prime.push_back(i);

            for(j=i*i; j<3800; j+=i+i)
                bt[j>>1]=0;
        }
    }

    while(i<3800)
    {
        if(bt[i>>1])
            prime.push_back(i);
        i = i+2;
    }
}

int main(void)
{
    lld t, a, c, b, i, j, p, lim, x, y, nx, ny;
    seive();

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&c);
        b=1;
       lim = sqrt(c);
      if(c%a==0)
      {
        for(i=0; (p=prime[i]) <= c && p<=lim ; i++)
        {
            x=0;
            y=0;
            nx = 1;
            ny = 1;
            while(a>1 && (a%p)==0)
            {
               a = a/p;
               x++;
               nx = nx*p;
            }

            while(c>1 && (c%p)==0)
            {
                c = c/p;
                y++;
                ny = ny*p;
            }

            if(y>x)
                b = b*ny;
        }
        if(c>a)
        b = b*c;

        printf("%lld\n",b);
      }
      else
        printf("NO SOLUTION\n");

    }

    return 0;
}
