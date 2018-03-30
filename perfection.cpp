#include<stdio.h>

long int N[110],sum,divisor;

int main(void)
{
 int i,j;
 
 while(scanf("%ld",&N[0])==1)
 {
  for(i=1;i<99;i++)
  {
   scanf("%ld",&N[i]);
   if(N[i]==0)
	break;
   }
  printf("PERFECTION OUTPUT\n");
  for(j=0;j<=i;j++)
  {
   sum=0;
  if(N[j]>0 && N[j]<=60000)
    {
	for(divisor=1;divisor<=N[j]/2;divisor++)
	{
	 if(N[j]%divisor==0)
	   sum=sum+divisor;
	}
   if(sum<N[j])
     printf("%5ld  DEFICIENT\n",N[j]);
   else if(sum>N[j])
     printf("%5ld  ABUNDANT\n",N[j]);
   else
     printf("%5ld  PERFECT\n",N[j]);
    }
   else if(N[j]<0)
	printf("%5ld  ABUNDANT\n",N[j]);
  else
	printf("END OF OUTPUT\n");
   }
  }
  
 return 0;
 }
