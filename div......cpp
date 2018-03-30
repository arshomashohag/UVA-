 #include<stdio.h>
 
 int main(void)
 {
   unsigned long long int l[1000],u[1000],i,j,k,d[1000],dt;
   int check,x,y;
   
   while(scanf("%d",&check)==1)
   {
	for(x=0;x<check;x++)
	{
	   	scanf("%llu%llu",&l[x],&u[x]);
	}
	for(i=l[y];i<=u[y];i++)
	{
		d[y]=0;
		dt=0;
		for(j=2;j<=i/2;j++)
		{
			if(!i%j)
			dt++;
		}
		if(d[y]<dt)
		d[y]=dt;
	}
   }


 }
