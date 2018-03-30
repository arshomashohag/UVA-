#include<stdio.h>

long long int n,ai[100050],i,out;

int main(void)
{
 int test;
 
 scanf("%d",&test);
 
 while(test)
 {
  scanf("%lld",&n);
  
  for(i=0;i<n;i++)
  scanf("%lld",&ai[i]);
  
  out=((n-1)*n)/2;
  
  printf("%lld\n",out);
  test--;
 }
 
 return 0;
}
