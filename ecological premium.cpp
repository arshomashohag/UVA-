#include<stdio.h>

int main(void)
{
  int test_case,num_of_farmers,i,j,k;
  unsigned long long int farmers_info[25][4],berden;
  
  while(scanf("%d",&test_case)==1)
  {
   for(i=1;i<=test_case;i++)
   {
	 berden=0;
	scanf("%d",&num_of_farmers);
	
	for(j=0;j<num_of_farmers;j++)
     for(k=0;k<3;k++)
      scanf("%llu",&farmers_info[j][k]);

	 for(j=0;j<num_of_farmers;j++)
	 berden=berden+farmers_info[j][0]*farmers_info[j][2];
	 
	 printf("%llu\n",berden);
   }

  }
  return 0;
}
