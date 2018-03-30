 #include<stdio.h>
 
 int main(void)
 {
  int N,M,b1,b2,i,temp,dig;
  
  
  while(scanf("%d",&N)==1)
  {
   for(i=1;i<=N;i++)
   {
	scanf("%d",&M);
	b1=0;
	b2=0;
	temp=M;
	while(temp)
	{
	 if(temp%2)
	 b1++;
	 temp=temp/2;
	}
	while(M)
	{
	 dig=M%10;
	 if(dig==1 || dig==2 || dig==4 || dig==8)
	 b2++;
	 else if(dig==3 || dig==5 || dig==6 || dig==9)
	 b2=b2+2;
	 else if(dig==7)
	 b2=b2+3;
	 M=M/10;
	}
	
	printf("%d %d\n",b1,b2);
   }
  }
  return 0;
 }
