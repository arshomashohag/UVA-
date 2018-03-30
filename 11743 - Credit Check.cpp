#include<bits/stdc++.h>
#define lld long long int
using namespace std;

lld sumd(lld a)
{
  lld s=0;

  while(a)
  {
      s+=a%10;
      a/=10;
  }
  return s;
}

int main(void)
{
 lld n, a, b, c, d, e, f, g, h, k,  out, in, sum1, sum2;
   char ar[30];

   scanf("%lld", &n);
   getchar();
   while(n--)
   {
     gets(ar);
     sum1 = 0;
     sum2 = 0;

     a = (ar[0]-48)*2;
     b = (ar[2]-48)*2;

     c = (ar[5]-48)*2;
     d = (ar[7]-48)*2;

     e = (ar[10]-48)*2;
     f = (ar[12]-48)*2;

     g = (ar[15]-48)*2;
     h = (ar[17]-48)*2;

     sum1 = sumd(a)+sumd(b)+sumd(c)+sumd(d)+sumd(e)+sumd(f)+sumd(g)+sumd(h);

    sum2 = (ar[1]-48)+(ar[3]-48)+(ar[6]-48)+(ar[8]-48)+(ar[11]-48)+(ar[13]-48)+(ar[16]-48)+(ar[18]-48);

    out = sum1+sum2;

    if(out%10==0)
        printf("Valid\n");
    else
        printf("Invalid\n");

  }

  return 0;

}
