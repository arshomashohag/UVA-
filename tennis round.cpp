#include<stdio.h>


int main(void)
{
  unsigned long long int n,i,j,r,it,jt;
	
	while(scanf("%llu%llu%llu",&n,&i,&j)==3)
	{
	 if(!(it=i%2) && !(jt=j%2))
	 {
	  if(j>i)
	  r=j-i-1;
	  else
	  r=i-j-1;
	 }
	else if(it && !jt)
	{
	 i=i+1;
	 if(j>i)
	  r=j-i-1;
	  else
	  r=i-j-1;
	}
	else if(!it && jt)
	{
	 j=j+1;
	 if(j>i)
	  r=j-i-1;
	  else
	  r=i-j-1;
	}
	else if(it && jt)
	{
     if(j>i)
	  r=j-i;
	  else
	  r=i-j;
	}
  printf("%llu\n",r);
	}
return 0;
}
