#include<bits/stdc++.h>
#define lld long long int

using namespace std;
vector< pair<lld, lld> > t_prime;
pair<lld, lld> th;

void seive(void)
{
  bitset<10000000> bt;
  bt.set();
  lld i, j, t, lim = sqrt(20000000);

  for(i=3; i<=lim; i+=2)
  {
      if(bt[i>>1])
      {
          t = i-2;
          if(i>3 && bt[t>>1])
            t_prime.push_back(make_pair(t, i));

          for(j=i*i; j<20000000; j+=i+i)
            bt[j>>1]=0;
      }
  }

 while(i<20000000)
 {
     t = i-2;
     if(bt[i>>1] && bt[t>>1])
        t_prime.push_back(make_pair(t, i));

     i+=2;
 }

}


int main(void)
{
   seive();
   lld in;

   while(scanf("%lld",&in)==1)
   {
       in -= 1;
       th = t_prime[in];
     printf("(%lld, %lld)\n", th.first, th.second);
   }

    return 0;
}
