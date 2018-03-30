#include<cstdio>
#include<iostream>
#include<cmath>
#include<bitset>
#include<vector>

#define lld long long int
#define Siz 44724

using namespace std;

vector<lld> prime;
int np[Siz];

lld lcm(lld a, lld b)
{
    return (b*(a/gcd(a,b)));
}

lld gcd(lld a, lld b)
{
    return b==0 ? a : gcd(b,a%b);
}

void seive(void)
{
  lld i, lim, j, l;
  bitset<Siz> bt;
  bt.set();
  lim = sqrt(Siz);
  bt[0]=0;
  prime.push_back(2);

  for(i=3; i<=lim; i=i+2)
  {
      if(bt[i>>1])
      {
          prime.push_back(i);
          l = i;
          for(j=i*i; j<=Siz; j+=i+i)
            bt[j>>1]=0;
      }
  }

  for(l=l+2; l<=Siz; l+=2)
  {
    if(bt[l>>1])
        prime.push_back(l);
  }
}

int main(void)
{

    lld n, c, out, i, lim;
    lld
    seive();

    while(scanf("%lld",&n) && n)
    {
        lim  = sqrt(n);
        c=1;
        for(i=2; i<=lim; i++)
        {
          if(n%i==0)
          {
              out = n/i;
             if(i!=out)
                c=c+2;
             else
                c++;
              if(gcd(i,out)==1)
                {
                    c++;
                 }
          }
        }
        if(n>1)
            c++;

        printf("%lld %lld\n",n,c);
    }

    return 0;
}
