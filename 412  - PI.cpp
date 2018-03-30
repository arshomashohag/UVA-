#include<cstdio>
#include<bitset>
#include<iostream>
#include<cmath>
#define lld long long int

using namespace std;

bitset<16400> bt;

void seive(void)
{
    lld i, j, lim;
    lim = sqrt(32773);
    bt.set();

    bt[0]=0;

    for(i=3; i<lim; i=i+2)
    {
        if(bt[i>>1])
        {
            for(j=i*i; j<=32773; j+=i+i)
            {
                bt[j>>1]=0;
            }
        }
    }

}

lld gcd(lld a, lld b)
{
    return b==0 ? a : gcd(b, a%b);
}

int main(void)
{
    lld n, i, j, cp, x, y, tcom;
    double out;
    lld ar[60];

    //seive();

   while(scanf("%lld",&n) && n)
   {
       for(i=0; i<n; i++)
        scanf("%lld",&ar[i]);

       cp=0;
       for(i=0; i<n; i++)
       {
           x=ar[i];
           for(j=i+1;j<n;j++)
           {
               y=ar[j];
               if(gcd(x,y)==1)
                cp++;
           }
       }
       tcom = (n*(n-1))/2;
       if(cp)
       {
           out = (double)tcom/(double)cp;
           out = out * 6.00;
           out = sqrt(out);
           printf("%0.6lf\n",out);
       }
       else
        printf("No estimate for this data set.\n");
   }


    return 0;
}
