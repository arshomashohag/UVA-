#include<stdio.h>

int main(void)
{
	int t,case_n,prob,a,b;
	
	while(scanf("%d",&t)==1)
	{
		for(case_n=1;case_n<=t;case_n++)
		{
			scanf("%d%d",&a,&b);
			printf("Case %d: %d\n",case_n,(a+b));
		}
	}
	
	return 0;
}
