 #include<stdio.h>
 #include<math.h>
 
 int main(void)
 {
   long long unsigned int i,n,temp,yes;
   double sqr;
   
   while(scanf("%llu",&n)==1)
   {
	if(n==0)
	break;
	
	yes=0;
	temp=n;
	n=sqrt(n);
	for(i=1;i<=n;i++)
	{
	 if(!(temp%i))
	 {
	   if(temp/i==i)
	   yes++;
	   else
	    yes=yes+2;
	 }
	 
	}
	if(yes%2)
	printf("yes\n");
	else
	printf("no\n");
   }
   
   return 0;
 }
