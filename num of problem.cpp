 #include<stdio.h>
 
 int main(void)
 {
   int test_n,case_n,a,b;
   
   scanf("%d",&test_n);
   {
	for(case_n=1;case_n<=test_n;case_n++)
	{
	 scanf("%d%d",&a,&b);
	 
	 printf("Case %d: %d\n",case_n,a+b);
	}
   }
   
   return(0);
 }
