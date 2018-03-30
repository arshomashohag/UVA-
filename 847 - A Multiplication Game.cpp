 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int n,mul,i;
  
  while(scanf("%llu",&n)==1)
  {
	i=1;
	mul=1;
   while(n)
   {
	if(i==1)
	{
	 mul=mul*9;
	 if(n<=mul)
	 {
	  printf("Stan wins.\n");
	  break;
	 }
	 i=2;
	}
	else if(i==2)
	{
	 mul=mul*2;
	 if(n<=mul)
	 {
	  printf("Ollie wins.\n");
	  break;
	 }
	 i=1;
	}
   }
  }
  return 0;
 }
