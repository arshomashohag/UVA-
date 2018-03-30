#include<stdio.h>
#include<math.h>

int main(void)
{
	
 long long int i,j,k,n,r;
 
 while(scanf("%lld%lld%lld",&n,&i,&j)==3)
 {
 	k=(long long int) pow(2,n);
 	
 	r=1;
 	while(1)
 	{
 		k=k/2;
 		if((i<=k && j>k)||(i>k && j<=k))
 		{
 			break;
 		}
 		
 		else
 		{
 		 r++;
 		}
 	}
 	printf("%lld\n",(n-r+1));
 } 
 return 0;
}

