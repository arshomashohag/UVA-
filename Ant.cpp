#include<stdio.h>


int main(void)
{
	int t,i,j,L,H[120],W,test=1;
	unsigned long int vol;
	
 while(test<=500)
	{
		scanf("%d",&t);
		
		if(!t)
		break;
		
		for(i=0;i<t;i++)
		{
			scanf("%d%d%d",&L,&W,&H[i]);
			
			if(i)
			{
			 if(H[i]>H[i-1])
			 {
			 	vol=L*W*H[i];
			 } 
			 else if(H[i]==H[i-1])
			 {
			   if(vol<(L*H[i]*W))
			     vol=L*H[i]*W;			
			}
			else
			H[i]=H[i-1];	
			
		    }
			else
			  vol=L*W*H[i];
		}
		
		printf("%lu\n",vol);
		test++;
	}
	
	return 0;
}
