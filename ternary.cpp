 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int ternary,base,rem;
  long long int n;
  while(scanf("%lld",&n)==1)
  {

  if(n<0)
   break;
   
   base=1;
   ternary=0;
   while(n)
   {
	rem=n%3;
	ternary=ternary+base*rem;
	base*=10;
	n=n/3;
   }
   printf("%llu\n",ternary);
  }
  return 0;
 }
