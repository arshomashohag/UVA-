#include<bits/stdc++.h>
#define lld long long int

using namespace std;

 vector<lld> prime;

 void seive(void)
 {
     bitset<500005> bt;
     bt.set();
     lld i, j, lim=sqrt(1000004);

     prime.push_back(2);

     for(i=3; i<=lim; i+=2)
     {

         if(bt[i>>1])
         {
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
 lld in, p, i, j, res, s=prime.size();


 while(scanf("%lld",&in) && in>=0)
 {

  for(i=0; (p=prime[i])<=in && i<s; i++ )
  {
      while(in>1 && in%p==0)
      {
          in /=p;
          printf("    %lld\n",p);
      }
  }
  if(in>1)
    printf("    %lld\n",in);
  printf("\n");

 }

 return 0;

}
