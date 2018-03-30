#include<stdio.h>

char str[500];

int main(void)
{
 int a,t,i,m,f;
 
 while(scanf("%d",&t)==1)
 {
  for(a=1;a<=t;a++)
  {
	scanf(" %[^\n]",str);
	
	i=0;
	m=0;
	f=0;
	while(str[i])
	{
	 if((str[i]=='M' && m++) || (str[i]=='F' && f++));
	 i++;
	}
	if(f==m)
	printf("LOOP\n");
	else if(f!=m)
	printf("NO LOOP\n");
  }
 }
 return 0;
}
