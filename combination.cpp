#include<stdio.h>

 double fact(int a);

int main(void)
{
 int n,m;
 double p;

 while(scanf("%d%d",&n,&m)==2)
 {
  if(n==0 && m==0)
  break;
  if(n>=m)
  {
   p=fact(n)/(fact(m)*fact(n-m));
	 printf("%d things taken %d at a time is %.0lf exactly.\n",n,m,p);
	}
  }
  
  return 0;
}
double fact(int a)
{
  double f=1;
  
  while(a>0)
  {
   f=f*a;
   a--;
  }
  
  return f;
}
