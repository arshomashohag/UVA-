#include<bits/stdc++.h>

using namespace std;

vector<int> prime;


void seive(void)
{
  int i, j;
  bitset<50> bt;
  bt.set();
  prime.push_back(2);
  for(i=3; i<11; i+=2)
  {
    if(bt[i>>1])
    {
        prime.push_back(i);

        for(j=i*i; j<=100; j+=i+i)
            bt[j>>1]=0;
    }
  }

  while(i<100)
  {
      if(bt[i>>1])
        prime.push_back(i);

      i+=2;
  }
}

int main(void)
{
    seive();
   vector<int> print;
   int in, p, i, j, n, out, l, temp;


   while(scanf("%d",&in) && in)
   {
     print.clear();
     out = in;
     l=0;

     for(i=0; (p = prime[i])<=in && i<25; i++)
     {


       n=0;
        for(j=2;j<=in; j++)
        {
            temp=j;
            while(temp>1 && temp%p==0)
            {
                n++;
                temp = temp/p;
            }
        }
       print.push_back(n);
       l++;
     }

     printf("%3d! =", out);

     for(i=0; i<l && i<15; i++)
       printf("%3d", print[i]);
         printf("\n");
      if(i<l)
        printf("      ");
     while(i<l)
     {
         printf("%3d", print[i]);
         i++;
     }
         printf("\n");

   }

   return 0;

}


