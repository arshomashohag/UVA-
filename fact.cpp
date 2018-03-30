#include<stdio.h>


int main(void)
{
  long long int t,caseno,n,i,fact,temp;
  
  while(scanf("%lld",&t)==1)
  {
  	
   for(caseno=1;caseno<=t;caseno++)
   {
   	fact=1;
    scanf("%lld",&n);
    
    
    if(n)
	for(i=1;i<=n;i++)
    {
    	fact=fact*i;
    	
    	if(fact>=4294967296)
    	{
    	 
    		fact=fact%4294967296;
    		if(!fact)
    		break;
    	}
    }
    else
    fact=1;
    printf("Case %lld: %lld\n",caseno,fact);
    
   }
  }
  return 0;
}
