#include<stdio.h>

int f91(unsigned long long int b);

int main(void)
{
 unsigned long long int a,ans;
 
 while(scanf("%llu",&a)==1)
 {
   if(a==0)
   break;
   
   if(a>100)
   printf("f91(%llu) = %llu\n",a,(a-10));
   
   else
     printf("f91(%llu) = %d\n",a,f91(a));
     
 }

return 0;
}

int f91(unsigned long long int b)
{
  if(b>100)
  return (b-10);
  
  else
   return f91(f91(b+11));
}
