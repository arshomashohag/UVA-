 #include<stdio.h>
 #include<stdlib.h>
 
 unsigned long long int price[10055],available_result,difference,result1,result2,money;
 int main(void)
 {
  int available_books,init,init2;
  
  while(scanf("%d",&available_books)==1)
  {
   for(init=0;init<available_books;init++)
   scanf("%llu",&price[init]);
   
   scanf("%llu",&money);
   printf("\n");
   difference=1000004;
   for(init=0;init<available_books;init++)
   {
   for(init2=init+1;init2<available_books ;init2++)
   {
		if(price[init]+price[init2]==money)
		{
		 if(difference > abs(price[init]-price[init2]))
		 {
           difference=abs(price[init]-price[init2]);
         if(price[init]<=price[init2])
		    {
			  result1=price[init];
			  result2=price[init2];
		    }
		  else
		  {
			result1=price[init2];
			result2=price[init];
		  }
           
		 }
		}
   }
   }
  printf("Peter shoult buy books whose price ar %llu and %llu.\n\n",result1,result2);
  }
  return 0;
 }
