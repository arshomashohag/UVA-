  #include<stdio.h>

 int main(void)
 {
  unsigned long long int factorial;
  unsigned long int n;
  int flag;

  while(scanf("%lu",&n)==1)
  {
   flag=0;
   factorial=1;
   for(;n;n--)
   {
   factorial=factorial*n;
   if(factorial>6227020800)
   {
 flag=1;
 break;
   }
   }
   if(flag)
    printf("Overflow!");
   else if(factorial<10000)
	  printf("Underflow!");
	else
	 printf("%llu",factorial);
  printf("\n");
  }
  return 0;
 }
