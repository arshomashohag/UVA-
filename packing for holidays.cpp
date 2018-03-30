 #include<stdio.h>
 
 int main(void)
 {
  int t,l,w,h,flag,case_n;
  
  while(scanf("%d",&t)==1)
  {
   for(case_n=1;case_n<=t;case_n++)
   {
	scanf("%d%d%d",&l,&w,&h);
	
	if(l>20 || h>20 || w>20)
	{
	 printf("Case %d: bad\n",case_n);
	}
	else
	printf("Case %d: good\n",case_n);
   }
  }
  return 0;
 }
