#include<stdio.h>
#include<math.h>

int x[50],y[50],cheak[50];
int main(void)
{
	int n,m,s,i,count,sx,sy,j,sxy,flag,pos=0;
	
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d%d",&m,&s);
		
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
			
		}
		for(i=0,j=0;i<m;i++)
		{
			sx=x[i]*x[i];
			sy=y[i]*y[i];
			sxy=0;
			
		  for(count=1;;count++)
		  {
		  	sxy=sxy+sqrt(sx+sy);
		  	if(sxy==s)
		  	{
		  		flag=1;
		  		break;
		  	}
		  	if(sxy>s)
		  	break;
		  }
		  if(flag)
		  {
		  	cheak[j]=count;
		  	if(j && cheak[j]<cheak[0])
		  	cheak[0]=cheak[j];
		  	pos=1;
		  	j++;
		  }
		}
	if(pos)
	printf("%d\n",cheak[0]);
	else
	printf("not possible\n");	
	}
	return 0;
}
