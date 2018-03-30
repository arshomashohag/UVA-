 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int n,a,b,c,temp;
  
  while(scanf("%llu",&n)==1)
  {
 if(!n)
 break;

  if(n<=3)
  b=n;
  else
  {
   b=3;
   c=2;
   for(a=4;a<=n;a++)
   {
    temp=b;
     b=c+b;
	c=temp;
   }
  }
  printf("%llu\n",b);
  }
  
  return 0;
 }
