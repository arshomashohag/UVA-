 #include<stdio.h>
 
 int main(void)
 {
   unsigned long long int n,m,a,d,r;
  
  
  while(scanf("%llu%llu",&n,&m)==2)
  {
   if(!n && !m)
   break;
   while(m/5)
   {
	r=m%5;
	m=m/5+r;
   }
   if(m)
    a=n%10;
   else
   a=1;
   if(m>1)
   {
   a=n%10;
   d=a;
   a=a*d;
   a=a%10;
   m=m-2;
   
   while(m>=1)
   {
	a=a*d;
	a=a%10;
	m--;
   }
   }
   
   printf("%llu\n",a);
  }
  
  return 0;
 }
