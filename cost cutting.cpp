#include<stdio.h>

int main(void)
{
  int a,b,c,temp,t,i,j,mid;
  
  while(scanf("%d",&t)==1)
  {
	for(i=1;i<=t;i++)
	{
	 scanf("%d%d%d",&a,&b,&c);
	 
	  if((a>b && b>c)||(c>b && b>a))
	  mid=b;
	  else if((b>a && a>c)||(c>a && b<a))
	  mid=a;
	  else
	  mid=c;
	  
	 
	 printf("Case %d: %d\n",i,mid);
	}
	
  }
  return 0;
}
