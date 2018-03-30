#include<stdio.h>

int main(void)
{
  int n,h[100],sum,mid,count,i,set=0;
  
  while(scanf("%d",&n)==1)
  {
   set++;
   if(!n)
   break;
   sum=0;
   for(i=0;i<n;i++)
   {
   scanf("%d",&h[i]);
   sum=sum+h[i];
   }
  mid=sum/n;
  count=0;
   for(i=0;i<n;i++)
   {
	if(h[i]>mid)
	count=count+(h[i]-mid);
   }
  printf("Set #%d\n",set);
  printf("The minimum number of moves is %d.\n\n",count);
 }
 
 return 0;
 
}
