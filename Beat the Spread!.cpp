 #include<stdio.h>
 
 int main(void)
 {
  int s,d,t,i,st;
  
  
  while(scanf("%d",&t)==1)
  {
   for(i=1;i<=t;i++)
   {
	scanf("%d%d",&s,&d);
	if(s>d && !(s%d))
	{
	 st=(s+d)/2;
	 d=s-st;
	 printf("%d %d\n",st,d);
	}
	else if(d==s)
	{
	 printf("%d 0\n",s);
	}
	else
	printf("impossible\n");
   }
  }
  
  return 0;
}
