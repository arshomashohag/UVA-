 #include<stdio.h>
 
 int main(void)
 {
   int str,i,n,nonzero,zero,case_n=0;
   
   while(scanf("%d",&n)==1)
   {
	if(!n)
	break;
	case_n++;
	nonzero=0;
	zero=0;
	for(i=0;i<n;i++)
	{
	 scanf("%d",&str);
	 if(str)
	 nonzero++;
	 else
	 zero++;
	}
	printf("Case %d: %d\n",case_n,(nonzero-zero));

   }
   
   return 0;
 }
