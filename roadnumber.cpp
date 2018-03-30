 #include<stdio.h>
 
 int main(void)
 {
	unsigned int r,n,char_n,case_n=0,temp;
	
	while(scanf("%u%u",&r,&n)==2)
	{
	 if(r==0 && n==0)
	 break;
	 char_n=0;
	 case_n++;
	 
	 if(r==0 && n)
	 printf("Case %u: -1\n",case_n);
	 
	else if(r<n)
	 printf("Case %u: 0\n",case_n);
	 
	 else
	 {
	  temp=n;
	  while(n<r && char_n<26)
	  {
	   char_n++;
	   n=n+temp;
	  }
	  if(n<r)
	  printf("Case %u: impossible\n",case_n);
	  
	  else
	  printf("Case %u: %u\n",case_n,char_n);
	 }
  }
  
  return 0;
 }
