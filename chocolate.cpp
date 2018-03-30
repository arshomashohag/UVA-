#include<stdio.h>

int main(void)
{
	int a,b,c,d,t,caseno,i;
	
	while(scanf("%d",&t)==1)
	{
		for(caseno=1;caseno<=t;caseno++)
		{
			scanf("%d%d%d%d",&a,&b,&c,&d);
			
			if(a<=(b+c+d))
			{
			if(b<=(a+d+c))
			{
			 	if(c<=(a+d+b))
			 	{
			 			if(d<=(a+b+c))
			 			{
			 				printf("Case %d: Okay\n",caseno);
			 			}
			 	}
			}
			}
			else
			printf("Case %d: Not Okay\n",caseno);
		}
	}
	return 0;
}
