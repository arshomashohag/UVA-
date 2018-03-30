 #include<stdio.h>
 
 unsigned long long int income,tax;
 
 int main(void)
 {
  int t,case_n;
  while(scanf("%d",&t)==1)
  {
   for(case_n=1;case_n<=t;case_n++)
   {
	 tax=0;
	scanf("%llu",&income);
	
	if(income<=180000)
	tax=0;
	else
     {
	  income=income-180000;
	  if(income<=300000)
       {
        tax=income/10;
	   }
	   else
	   {
		tax=30000;
		income=income-300000;
		if(income<=400000)
		{
   tax=((income*3)/20)+tax;
		}
		else
		{
		 tax=tax+60000;
		 income=income-400000;
		 if(income<=300000)
		 {
		   tax=tax+(income/5);
		 }
		 else
		 {
		   tax=tax+600000;
		   income-income-300000;
            tax=tax+(income/4);
		 }
		}
	   }
    }
   if(tax<=2000 && tax)
   printf("Case %d: 2000\n",case_n);
   else
   printf("Case %d: %llu\n",case_n,tax);
   }
  }
  return 0;
 }
