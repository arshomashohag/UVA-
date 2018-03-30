 #include<stdio.h>
 
 int main(void)
 {
   int t,i,a,b,sum;
   
   while(scanf("%d",&t)==1)
   {
	for(i=1;i<=t;i++)
	{
	scanf("%d%d",&a,&b);
	sum=0;
	for(a;a<=b;a++)
	if(a%2)
	sum=sum+a;
	
	printf("Case %d: %d\n",i,sum);
	}
  }
  return 0;
 }
