#include<iostream>
#define lld long long int

using namespace std;

lld l,a,b,c,r,i,flag,j;
double sqr;

lld gcd ( lld a, lld b )
{
  lld c;
  while ( a != 0 ) {
     c = a;
     a = b%a;
      b = c;
  }
  return b;
}

int main(void)
{
  while(cin>>l>>r)
  {
    a=0;
    b=0;
    c=0;
    flag=0;
for(j=l;j<=r;j++)
  {
    a=j;
    b=j+1;


   if(b<r)
        for(i=b+1;i<=r;i++)
        if(gcd(i,b)==1 && gcd(a,i)!=1)
        {
           c=i;
           break;
        }

if(a && b && c)
     {
         cout<<a<<' '<<b<<' '<<c<<endl;
         flag=1;
         break;
         }
  }
  if(!flag)
     cout<<"-1"<<endl;

  }
return 0;
}
