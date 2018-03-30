 #include<stdio.h>
 
 int main(void)
 {
  int n,an[310],jolly,flag,i,test;
  
  while(scanf("%d",&n)==1)
  {
   for(i=0;i<n;i++)
	scanf("%d",&an[i]);
	flag=0;
 if(n<=0)
 break;
 int dig[300]={0};
 
  for(i=0;i<(n-1);i++)
	{
     if(an[i]>=an[i+1])
	   {
		test=an[i]-an[i+1];
		
		if(test<1 || test>(n-1))
	       {
			flag=1;
			break;
	        }
	    }
	 else if(an[i]<an[i+1])
	  {
	  test=an[i+1]-an[i];
	   if(test<1 || test>(n-1))
	     {
			flag=1;
			break;
	     }
	   }
	   
	 dig[test-1]++;
	 if(dig[test-1]>1)
	 {
	  flag=1;
	  break;
	 }
  }
  if(flag)
  printf("Not jolly\n");
  else
  printf("Jolly\n");;
 }
 return 0;
}
