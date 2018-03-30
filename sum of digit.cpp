#include<stdio.h>

int main(void)
{
 unsigned long long int n;
 int sum,d;
 
 while(scanf("%llu",&n)==1)
 {
if(n==0)
break;
if(n>9)
  {
  while(n>9)
  {
   sum=0;
   while(n)
   {
	d=n%10;
	sum=sum+d;
	n=n/10;
   }
   n=sum;
  }
  printf("%d\n",sum);
 }
 else
 printf("%llu\n",n);
 }
 return 0;
}
