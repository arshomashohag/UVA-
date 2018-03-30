 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int n,n_odd,nth_n,n_1,n_2;
  
  while(scanf("%llu",&n)==1)
  {
   n=(n+1)/2;
   n_odd=n*n;
   nth_n=2*n_odd-1;
   n_1=2*(n_odd-1)-1;
   n_2=2*(n_odd-2)-1;
   
   printf("%llu\n",nth_n+n_1+n_2);
  }
  return 0;
 }
