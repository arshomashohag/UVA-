#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

long long int n, i, j, u, l, out, sq, num;
int ar[10004];
int main(void)
{
  cin>>n;

  while(n--)
  {
      cin>>l>>u;
       memset(ar,0,sizeof(ar));
       sq = sqrt(u);
       for(i=2; i<= sq; i++)
       {
         j = u/i ;

         while(j>=i && (i*j)>=l)
         {
            if(i==j)
                ar[(j*i)-l]++;
            else
             ar[(j*i)-l]+=2;
           j-- ;
         }
       }
    out=0;
    for(i=0;i<=(u-l);i++)
    {
      if(ar[i]>out)
      {
          out = ar[i];
          num  = i + l;
      }
    }
  printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,num,out+2);
  }
}
