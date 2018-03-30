#include<stdio.h>

int main(void)
{
  int data_sets,N,i,digit[12],f,temp,dig_i;
  
  while(scanf("%d",&data_sets)==1)
  {
   for(i=1;i<=data_sets;i++)
   {
    digit[0]=0;
    digit[1]=0;
    digit[2]=0;
    digit[3]=0;
    digit[4]=0;
    digit[5]=0;
    digit[6]=0;
    digit[7]=0;
    digit[8]=0;
    digit[9]=0;
	scanf("%d",&N);
	for(f=1;f<=N;f++)
	{
	temp=f;
	 for(;f;)
	 {
	   dig_i=f%10;
	   digit[dig_i]=digit[dig_i] + 1;
	   f=f/10;
	 }
	 f=temp;
	}
	for(f=0;f<=9;f++)
	{
	  if(f==0)
	  printf("%d",digit[f]);
	  else
	  printf(" %d",digit[f]);
	}
	printf("\n");
   }
  }
  return 0;
}
