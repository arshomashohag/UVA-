 #include<stdio.h>
 #include<stdlib.h>
 
 int cmfunc(const void * a,const void * b)
 {
 	return (*(int *) a-*(int *) b);
 }
 
 int main(void)
 {
  int t,age[20],i,case_n,n;
  
  while(scanf("%d",&t)==1)
  {
  	for(case_n=1;case_n<=t;case_n++)
	{
      scanf("%d",&n);
   
      for(i=0;i<n;i++)
       scanf("%d",&age[i]);
   
      qsort(age,n,sizeof(int),cmfunc);
      if(n%2)
        i=n/2;
      
	  else
	  i=(n/2)+1;
      
       printf("Case %d: %d\n",case_n,age[i]);
    }  
  }
  return 0;
 }
