#include<stdio.h>

int main(void)
{
  int i,n,t,j,case_n;
  
  unsigned long long int ar[50],temp;
  
  while(scanf("%d",&t)==1)
  {
   for(case_n=1;case_n<=t;case_n++)
   {
   scanf("%d",&n);
   temp=0;
   for(i=0;i<n;i++)
   {
	scanf("%llu",&ar[i]);
	 if(ar[i]>temp)
	 temp=ar[i];
   }
   
   printf("Case %d: %llu\n",case_n,temp);
   }
  }
  
  return 0;
}
