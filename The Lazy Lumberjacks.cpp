 #include<stdio.h>
 
 int main(void)
 {
  int n,i,j,flag;
   int a,b,c,ab,bc,ca;
  
   while(scanf("%d",&n)==1)
   {
 if(n>=2 && n<=20)
  {
   for(i=1;i<=n;i++)
   {
	scanf("%d%d%d",&a,&b,&c);
	ab=a+b;
	bc=b+c;
	ca=c+a;
	
	if(ab>c)
	 {
		if(bc>a)
	   if(ca>b)
	printf("OK\n");
    }
	else
	printf("Wrong!!\n");
	
   }
 }
}
return 0;
 }
