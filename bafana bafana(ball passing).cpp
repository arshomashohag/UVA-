#include<stdio.h>

int main(void)
{
 int T,N,K,P,count,i,case_n,last_player;
 
 scanf("%d",&T);

 for(case_n=1;case_n<=T;case_n++)
 {
  scanf("%d%d%d",&N,&K,&P);
  
  count=0;
  for(i=1;i<=P;i++)
  {
	if(K==N)
	{
	K=1;
	count++;
	}
	else
	 K++;
  }
  printf("Case %d: %d\n",case_n,K);
 }
 return 0;
}
