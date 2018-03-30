 #include<stdio.h>
 
 int main(void)
 {
 	int t,n,a,b;
 	
 	while(scanf("%d",&t)==1)
 	{
 		for(;t>=1;t--)
 		{
 			scanf("%d",&n);
 			a=n/2;
 			b=n-a;
 			printf("%d %d\n",a,b);
 			 
 		 }
 	}
 	return 0;
 }
