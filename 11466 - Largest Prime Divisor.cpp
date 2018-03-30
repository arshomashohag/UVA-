#include<cstdio>
#include<bitset>
#include<cmath>
#include<vector>
#include<set>
#define lld long long int

using namespace std;

vector<lld> prime;
lld n_of_p;

void seive(void)
{
    bitset<5000005> bt;
    bt.set();
    lld i, j, lim = sqrt(1000000);
    prime.push_back(2);
    n_of_p=1;
    for(i=3; i<=lim; i+=2)
    {
        if(bt[i>>1])
        {
            prime.push_back(i);
            n_of_p++;
            for(j=i*i; j<=10000000; j+=i+i)
                bt[j>>1]=0;
        }
    }

    while(i<=10000000)
    {
        if(bt[i>>1])
        {
            prime.push_back(i);
            n_of_p++;
        }
        i=i+2;
    }

}

int main(void)
{
 seive();
 lld p, i, out, j, lim, in, temp, cn;
set<lld> chk;

 while(scanf("%lld",&in) && in)
 {
   lim = sqrt(in);
   cn=0;
   chk.clear();
   for(i=0; (p=prime[i])<=in && p<=lim && i < n_of_p; i++)
   {
       if(in%p==0)
       {
           chk.insert(p);
           out = p;
           while(in && in%p==0)
           {
               in = in/p;

           }
       }
   }

    if(in>1)
        chk.insert(in);

   if(chk.size()<=1)
    printf("-1\n");

   else if(in>out)
    printf("%lld\n",in);
   else
    printf("%lld\n",out);

 }


    return 0;
}
