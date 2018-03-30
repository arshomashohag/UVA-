 #include<stdio.h>
 
 int str[150];
 
 int main(void)
 {
  int t,case_n,i,n,out;
  char ch;
  while(scanf("%d",&t)==1)
  {
   for(case_n=1;case_n<=t;case_n++)
   {
	out=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 scanf("%d",&str[i]);

	 if(str[i]>=out)
	  out=str[i];
	}
	 printf("Case %d: %d\n",case_n,out);
   }
  }
  return 0;
 }
