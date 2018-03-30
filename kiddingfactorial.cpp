 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int factorial;
  long int n;
  int flag;
  
  while(scanf("%ld",&n)==1)
  {
   flag=0;
   factorial=1;
 if(n<=999999 && n>=-999999)
  {

  if(n>=0)
  {
   for(;n;n--)

   {
   factorial=factorial*n;
   if(factorial>6227020800)
   {
 flag=1;
 break;
   }
   }
  }
  else
  {
   if(n%2)
   flag=1;
   else
   flag=2;
  }
   if(flag==1)
    printf("Overflow!");
   else if(factorial<10000)
	  printf("Underflow!");
   else if(flag==2)
	 printf("Underflow!");
	else
	 printf("%llu",factorial);
  printf("\n");
}
}
  return 0;
 }
