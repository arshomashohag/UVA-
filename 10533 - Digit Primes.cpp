#include<bits/stdc++.h>
#define lld long long int

using namespace std;

 vector<lld> prime;
int chk[100]={0};
vector<lld> save;

 void seive(void)
 {
     bitset<500005> bt;
     bt.set();
     lld i, j, lim=sqrt(1000004);

     prime.push_back(2);
     chk[2]=1;

     for(i=3; i<=lim; i+=2)
     {

         if(bt[i>>1])
         {
             if(i<90)
                chk[i]=1;
             prime.push_back(i);

             for(j=i*i; j<=1000002; j+=i+i)
             {
                 bt[j>>1]=0;
             }
         }
     }

     while(i<=1000000)
     {
        if(bt[i>>1])
            prime.push_back(i);
        i+=2;
     }

 }

int main(void)
{
 seive();
 lld in, t , lb, ub, p, i, j, res;

 scanf("%lld",&t);

     i = lower_bound(prime.begin(), prime.end(), 1) - prime.begin();
     j = upper_bound(prime.begin(), prime.end(), 1000000) - prime.begin() - 1;

 res=0;
 while(i<=j)
   {
     p = prime[i];
     in=0;
     while(p)
     {
         in += p%10;
         p /= 10;
     }
     if(chk[in])
        res++;

    save.push_back(res);

    i++;
   }

 while(t--)
 {
   scanf("%lld%lld",&lb, &ub);

   i = lower_bound(prime.begin(), prime.end(), lb) - prime.begin();
     j = upper_bound(prime.begin(), prime.end(), ub) - prime.begin() - 1;

     if(i>0)
        res = save[j]-save[i-1];
     else
        res = save[j];
   printf("%lld\n", res);

 }



 return 0;

}
