 #include<stdio.h>

 int main(void)
 {
   int test,a,b,odd_sum,count;
   
   while(scanf("%d",&test)==1)
   {
   for(count=1;count<=test;count++)
   {
	scanf("%d%d",&a,&b);
	if(a>=0 && a<=b)
	{
	  odd_sum=0;
	  while(a<=b)
	  {
	   if(a%2)
	     odd_sum=odd_sum+a;
	   a++;
	  }
	printf("Case %d: %d",count,odd_sum);
	}
	printf("\n");
   }
   }
   return 0;
 }
