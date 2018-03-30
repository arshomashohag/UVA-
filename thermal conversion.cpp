#include<stdio.h>

int main(void)
{
  float c,f,fc,cf;
  int t,case_n;
  while(scanf("%d",&t)==1)
  {
	for(case_n=1;case_n<=t;case_n++)
	{
	 scanf("%f%f",&c,&f);
	 
	 fc=(9*c)/5.000+32;
	 cf=f+fc;
	 c=(5*(cf-32))/9.0000;
	 printf("Case %d: %.2f\n",case_n,c);
	}
  }
 return 0;
}
