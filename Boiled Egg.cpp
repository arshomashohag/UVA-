 #include<stdio.h>
 #include<stdlib.h>
 
 int cmfunc(const void * a,const void * b)
 {
   return  *(int *) a - *(int *) b;
 }
 
 int main(void)
 {
  int n,i,t,case_n,str[50],w,count,p,q;
  
  while(scanf("%d",&t)==1)
  {
   for(case_n=1;case_n<=t;case_n++)
   {
	scanf("%d%d%d",&n,&p,&q);
	for(i=0;i<n;i++)
	scanf("%d",&str[i]);
	
	qsort(str,n,sizeof(int),cmfunc);
	
	i=0;
	w=0;
	count=0;
	while(count<n)
	{
	if(w+str[i]<=q)
	  w=str[i]+w;
	else
	break;
	 count++;
	 i++;
	}
	if(count<=p)
	printf("Case %d: %d\n",case_n,count);
	else
	printf("Case %d: %d\n",case_n,p);
	
   }
  }
  return 0;
 }
