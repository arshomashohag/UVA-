 #include<stdio.h>
 
 int main(void)
 {
  int test_case,n,ini,tens_digit;
  long long int n_temp;
  
  while(scanf("%d",&test_case)==1)
  {
   if(test_case>=1 && test_case<=100)
    for(ini=1;ini<=test_case;ini++)
     {
	  scanf("%d",&n);
		n_temp=(n*315+36962);

	
	    if(n_temp<0)
	     n_temp=(-1)*(n_temp);
	     
	     n_temp=n_temp/10;

	    if(n_temp)
	     {
	    tens_digit=n_temp%10;
	     printf("%d\n",tens_digit);
         }
      }
  }
  return 0;
 }
