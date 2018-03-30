 #include<stdio.h>
 #include<ctype.h>
 #include<stdlib.h>

 int main(void)
 {
  char str[100],taka[10];
  unsigned long int sum=0;
  int i,k,j,t,n;

  while(scanf("%d",&t)==1)
  {
   for(i=1;i<=t;i++)
   {
       scanf(" %[^\n]",str);
       
       if(str[0]=='d')
	{
	 j=0;
	 k=0;
	 while(str[j])
	 {
	   if(isdigit(str[j]))
	   {
		taka[k]=str[j];
		k++;
	   }
	   j++;
	 }
	 taka[k]='\0';
	 sum=sum+atoi(taka);
	}
	if(str[0]=='r')
	 printf("%lu\n",sum);
   }
  } 
  
  return 0;
 }
