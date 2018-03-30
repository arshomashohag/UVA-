#include<stdio.h>

int mar[1000050],Q,a,b;
int main(void)
{
	unsigned long long int i,n,sum;
	char ch;
	
	scanf("%llu%d",&n,&Q);
	for(i=0;i<n;i++)
	scanf("%d",&mar[i]);

  while(Q)
  {
  	sum=0;
  	scanf(" %c %d %d",&ch,&a,&b);
  	
  	
  	if(ch=='S')
  	{
  		for(a;a<=b;a++)
  		sum=sum+mar[a];
  		printf("%llu\n",sum);
  	}
  	else if(ch=='G')
  	mar[a]=mar[a]+b;
  	
  	else if(ch=='T')
  	mar[a]=mar[a]-b;
  	
  }	
return 0;	
}
