#include<cstdio>
#include<iostream>
#include<stack>

using namespace std;

long long int t, n, m, nd, base, i,top, temp ;


int main(void)
{
scanf("%lld",&t);

while(t--)
{
    stack< int > digits;

    scanf("%lld",&n);

    m = n;
    nd=0;
    while(m)
    {
      digits.push(m%10);
      m=m/10;
      nd++;
    }
    m=0;

   while(!digits.empty())
   {
     top = digits.top();
     temp=1;
     for(i=1;i<=nd;i++)
       temp=temp*top;

      m = m + temp;
      digits.pop();
   }

   if(n==m)
    printf("Armstrong\n");
   else
     printf("Not Armstrong\n");
}

    return 0;
}
