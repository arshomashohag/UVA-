 #include<stdio.h>
 
 int main(void)
 {
  unsigned int one,two,base,sum,a,b;
  
  while(scanf("%u%u",&one,&two)==2)
  {
   base=1;
   sum=0;
   while(one || two)
   {
   a=one&1;
   b=two&1;
   
	if(a&&b)
	{
	base=base*2;
	one=one>>1;
	two=two>>1;
	}
	else
     {
	sum=sum+a*base+b*base;
	base=base*2;
	one=one>>1;
	two=two>>1;
	 }
   }
   printf("%u\n",sum);
  }
  return 0;
 }
