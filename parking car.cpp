 #include<stdio.h>
 #include<stdlib.h>

  int comfunc(const void *a, const void *b)
  {
   return (*(int *)a-*(int *)b);
  }
 
 int main(void)
 {
  int n,t,str[50],op_w,i,j;
  
  while(scanf("%d",&t)==1)
  {

  for(j=1;j<=t;j++)
  {
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&str[i]);
	
	qsort(str,n,sizeof(int),comfunc);
	op_w=0;
	
	for(i=0;;i++)
	{
	 
	 if(i==n-1)
	 {
      op_w=op_w+abs(str[i]-str[0]);
      break;
	 }
	 else
      op_w=op_w+abs(str[i]-str[i+1]);
	}
	printf("%d\n",op_w);
  }
 }
  return 0;
 }
