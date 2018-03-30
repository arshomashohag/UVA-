 #include<stdio.h>
 
 int main(void)
 {
   unsigned long long int n,k,a,b,t;
  
  
  while(scanf("%llu%llu",&n,&k)==2)
  {
   if(n>=k)
   {
	a=n/k;
	b=n+a;
	a=n%k+a;
	while(a>=k)
    {
     t=a;
      a=a/k;
	 b=b+a;
	 a=a+(t%k);
	}
   }
   else
   b=n;
   printf("%llu\n",b);
  }
  return 0;
 }
