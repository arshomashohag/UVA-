 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int x,i,sum;
  
  while(scanf("%llu",&x)==1)
  {
		sum=0;
   for(i=1;i<=x;i++)
   sum=sum+(i*i*i);
   
   printf("%llu\n",sum);
  }
  
  return 0;
  
 }
