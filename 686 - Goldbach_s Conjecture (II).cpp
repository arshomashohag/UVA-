#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<bitset>
#include<cmath>
#define lld long long int
#define si 2<<15
using namespace std;

bitset<si> bit;
lld up, in;

lld prime[2<<14], i, j, out,  np, lim, n, dif;

void seive(lld up)
{
    lld i, sqr, j;
     sqr = sqrt(up);
     bit.set();
     bit[0]=0;
     for( i=3; i<=sqr; i+=2 )
     {
         if(bit[i>>1])
         {
             for(j=i*i; j<=up; j+=i+i)
                bit[j>>1]=0;
         }
     }
}

int main(void)
{
  seive(si-1);

  prime[0]=2;
  j=3;
  for(np=1; j<si; j=j+2)
  {
      if(bit[j>>1])
      {
          prime[np++]=j;
      }
  }

   while(scanf("%lld",&in) && in)
   {
       out=0;
       lim = in/2;

       for(i=0;i<np && (n=prime[i])<=lim ; i++)
       {
           dif = in-n;

           if( dif==2 || ( (dif&1) && bit[dif>>1] ))
            out++;
       }

       printf("%lld\n",out);
   }

    return 0;
}
