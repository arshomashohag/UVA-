#include<stdio.h>

int main(void)
{
unsigned long long int p;
unsigned int a,n,k;

while(scanf("%d%llu",&n,&p)==2)
{
	k=1;
	a=n;
 if(n!=p)
 {
  while(n<p)
  {
  n=n*a;
  k++;
  }
 if(n==p)
  printf("%d\n",k);
}
}

return 0;
}
