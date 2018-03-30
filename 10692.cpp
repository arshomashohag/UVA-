#include<bits/stdc++.h>

using namespace std;

int m, i, cn=1, n, a[14], d;


int MOD(int b, int p){

 if(p<=1)
    return b;
  if(p%2)
   return (b* MOD(b,p-1))%m;

 return ( MOD(b,p/2) * MOD(b, p/2) )%m;
}

int main(void)
{
 while(scanf("%d", &m) && m!=0)
 {
   scanf("%d", &n);
   for(i=0; i<n; i++)
    scanf("%d",&a[i]);

    i=n-2;

  d= a[i];
  for(; i>=0; i--)
  {
    d = MOD(d,a[i]);
  }

  printf("Case #%d: %d\n", cn++, d);
 }


    return 0;
}
