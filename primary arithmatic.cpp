 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int a,b,temp,count,da,db,dec,sum_of_d;
  
  while(scanf("%llu%llu",&a,&b)==2)
  {
   if(a==0 && b==0)
   break;
   count=0;
   if(a<b)
   {
	temp=a;
	a=b;
	b=temp;
   }
   dec=0;
   while(a)
   {
	da=a%10;
	if(b)
	 db=b%10;
	 else
	 db=0;
	sum_of_d=da+db+dec;
	if(sum_of_d>=10)
	{
	 count++;
	 dec=1;
	}
	a=a/10;
	b=b/10;
   }
   if(!count)
   printf("No carry operation.\n");
   else if(count==1)
   printf("%d carry operation.\n",count);
   else
   printf("%d carry operations.\n",count);
  }
  
  return 0;
 }
