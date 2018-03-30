#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<bitset>
#include<algorithm>
#define lld long long int

using namespace std;

vector<lld> prime;

void seive()
{
    bitset<16005> bt;
    bt.set();
    prime.push_back(2);

    lld i, j, lim = sqrt(32000);
    for(i=3; i<=lim; i=i+2)
    {
        if(bt[i>>1])
        {
            prime.push_back(i);

            for(j=i*i; j<=32000; j+=i+i)
                bt[j>>1]=0;
        }
    }

    while(i<=32000)
    {
        if(bt[i>>1])
            prime.push_back(i);
        i = i+2;
    }
}


int main(void)
{
    seive();

   lld t, a, b, outa, outb, i, j, lim, p, n, temp, ona,onb, ta;
   vector<lld> nfac;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        ona = a;
        onb = b;
        outa = -1;

        while(a<=b)
        {
            lim = sqrt(a);
            temp=1;
            ta = a;

          for(i=0; (p=prime[i])<=a && p<=lim ; i++)
          {
            n=0;
            while(a>1 && (a%p)==0)
            {
                a = a/p;
                n++;
            }

            temp = temp*(n+1);
           }

           if(a>1)
            temp = temp*2;

          if(outa<temp)
          {
              outa = temp;
              outb = ta;
          }


          a=ta+1;
         }

        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",ona, onb, outb, outa);
    }

    return 0;
}
