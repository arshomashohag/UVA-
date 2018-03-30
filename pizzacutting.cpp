#include<stdio.h>

int main(void)
{
 long long int n,i,p;
  
  while(scanf("%lld",&n)==1)
  {
  if(n<0)
   break;
 else if(!n)
 printf("1\n");
 else if(n)
   {
 if(n%2)
 {
  i=(unsigned long long int)((n+1)/2);
  p=n*i+1;
 }
 else
  {
	i=(unsigned long long int)(n/2);
	p=(n+1)*i+1;
  }
  
  
  
   printf("%lld\n",p);
}
  }
  return 0;
}
