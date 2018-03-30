 #include<stdio.h>
 
 char str[500];
 
 int main(void)
 {
  int i,count;
  float sum;
  
  while(scanf(" %[^\n]",str)==1)
  {
   if(str[0]=='*')
   break;
   i=0;
   count=0;
   while(str[i])
   {
   sum=0;
	while(str[i]!='/')
	{
	 if(str[i]=='W')
	 sum=sum+1;
	 else if(str[i]=='H')
	 sum=sum+1/(float)2;
	 else if(str[i]=='Q')
	 sum=sum+1/(float)4;
	 else if(str[i]=='E')
	 sum=sum+1/(float)8;
	 else if(str[i]=='S')
	 sum=sum+1/(float)16;
	 else if(str[i]=='T')
	 sum=sum+1/(float)32;
	 else if(str[i]=='X')
	 sum=sum+1/(float)64;
	 i++;
	}
	i++;
	if(sum==1)
	count++;
   }
   
   printf("%d\n",count);
  }
  
  return 0;
 }
