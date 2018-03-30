 #include<stdio.h>
 
 int main(void)
 {
  int N1,N2,radn1[120],radn2[120],i,j,k,t_w=0,count;
  
  
  while(scanf("%d%d",&N1,&N2)==2)
  {
	if(N1==0 || N2==0)
	break;
     t_w++;
	for(i=0;i<N1;i++)
	scanf("%d",&radn1[i]);
	
	for(j=0;j<N2;j++)
	scanf("%d",&radn2[j]);
	count=0;
	i=i-1;
	j=j-1;
	
	while(j>=0|| i>=0)
	{

	 if(radn1[i]==radn2[j])
	    {
	     count++;
	     i--;
	     j--;
	    }
	 else
	 {
	 if(radn1[i-1]==radn2[j-1])
	   while(radn1[i-1]==radn2[j-1])
	   {
		count++;
		i--;
		j--;
	   }
	 else if(radn1[i]==radn2[j-1])
	   while(radn1[i]==radn2[j-1])
	   {
		 j--;
		 i--;
		 count++;
	   }
	 else if(radn1[i-1]==radn2[j])
	   while(radn1[i-1]==radn2[j])
	   {
		 j--;
		 i--;
		 count++;
	   }
	 }
	 i--;
	 j--;
	}
	
	printf("%d\n",count);
  }
  return 0;
 }
