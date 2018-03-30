#include<cstdio>
#include<cmath>

using namespace std;

long long int in,n,i,j,outi,outj,mid;
double sqr;

int main(void)
{
  while(scanf("%lld",&in) && in)
  {
     sqr=sqrt(double(in));
     sqr=ceil(sqr);
     n=(long long)sqr;
    mid=(n*n)-(n-1);
    outi=n;
    outj=n;


    if(in<mid)
     {
         if(n%2==0)
         {
          while(mid!=in)
          {
              outi--;
              mid--;
          }
         }
         else
         {
           while(mid!=in)
           {
               outj--;
               mid--;
           }
         }
     }
     else if(in>mid)
     {

       if(n%2==0)
         {
           while(mid!=in)
           {
               outj--;
               mid++;
           }
         }

         else
         {
            while(mid!=in)
           {
               outi--;
               mid++;
           }
         }
     }

     printf("%lld %lld\n",outi,outj);
  }
  return 0;
}
