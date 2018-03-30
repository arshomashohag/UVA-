 #include<stdio.h>
 
 int main(void)
 {
  int n,i,temp;
  unsigned long long int m,fm;
  while(scanf("%d",&n)==1)
  {
   if(n<=-1)
   break;
	m=0;
	fm=1;
   for(i=1;i<=n;i++)
   {
	temp=m;
	 m=m+fm;
	fm=temp+1;
   }
   printf("%llu %llu\n",m,(m+fm));
  }
  
  return 0;
 }
