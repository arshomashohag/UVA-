 #include<stdio.h>
 
 long long int ar[1050],q,test1st,test2nd,temp,closest;
 
 int main(void)
 {
  int i,case_n=0,j,n,m;
  
  while(scanf("%d",&n)==1)
  {
   if(n==0)
   break;
   case_n++;
   for(i=0;i<n;i++)
   scanf("%lld",&ar[i]);
   
   scanf("%d",&m);
   
   printf("Case %d:\n",case_n);
   while(m>=1)
   {
	scanf("%lld",&q);
	
	for(i=0;i<n-1;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	   if(i==0 && j==1)
	   {
		 temp=ar[i]+ar[j];
		 test1st= temp>=q?temp-q:q-temp;
		 closest=temp;
	   }
	    else
        {
         temp=ar[i]+ar[j];
		 test2nd= temp>=q?temp-q:q-temp;
		 
         if(test1st>test2nd)
           {
			 test1st=test2nd;
			 closest=temp;
		   }
		 }
	   }
	}
  printf("Closest sum to %lld is %lld.\n",q,closest);
  m--;
   }
  }
  
  return 0;
 }
