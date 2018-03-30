#include<stdio.h>

int main(void)
{
 int n,i,s;
 
 while(scanf("%d",&n)==1)
 {
  if(!n)
  break;
  s=(n*(2*n+1)*(n+1));
  i=s/6;
  printf("%d\n",i);
 }
 return 0;
}
