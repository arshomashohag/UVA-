#include<stdio.h>


int main(void)
{
  int t,a,i,j,k,temp;
  
  while(scanf("%d",&t)==1)
  {
  	while(t--)
  	{
  	  scanf("%d",&a);
  	  i=0;
  	for(j=0,k=1;j<=a;)
  	{
  	 if(j==a)
  	 {
  	 	i=1;
  	 	break;
  	 	
  	 }
  	 temp=j;
  	 j=k+j;
  	 k=temp;
  	}
  	  if(i)
  	  printf("YES\n");
  	  else
  	  printf("NO\n");
  	}
  }
  return 0;
}
 
