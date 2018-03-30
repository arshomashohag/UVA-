 #include<stdio.h>
 
 unsigned long long int n;
 
 int main(void)
 {
  int digit_sum;
  
  while(scanf("%llu",&n)==1)
  {
   if(n==0)
	break;

 for(;n;)
 {
	digit_sum=0;
   for(;n;)
    {
	 digit_sum=digit_sum+n%10;
     n=n/10;
	}
  if(digit_sum<=9)
    break;
  else
	n=digit_sum;
  }
  printf("%d\n",digit_sum);
  }
  return 0;
 }
