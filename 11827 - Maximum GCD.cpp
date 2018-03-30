#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<sstream>
#define lld long long int

using namespace std;

lld gcd(lld a, lld b)
{
    return b==0 ? a : gcd(b, a%b);
}

int main(void)
{
    lld ar[120], in, i, j, k, out, t;
    string str;

   scanf("%lld",&t);
getchar();
   while(t--)
   {
       getline(cin,str);

       istringstream ss(str);
       i=0;
       while(ss>>ar[i])
       {

           i++;
       }

       i--;

       out = 0;
       for(j=0; j<i; j++)
       {
          for(k=j+1; k<=i; k++)
          {
            out=max(out,gcd( ar[j], ar[k] ) );
          }
       }

       printf("%lld\n",out);
   }
    return 0;
}
