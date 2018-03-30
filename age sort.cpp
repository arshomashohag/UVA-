 #include<stdio.h>
 #include<stdlib.h>
 
 int comfunc(const void * a, const void * b)
  {
   return (*(int *)a-*(int *)b);
  }
 
  int age[2000050];
  
 int main(void)
 {
   long long int n,count,sort;
   int min,max,temp;
   
   while(scanf("%llu",&n)==1)
   {
	if(n==0)
	 break;
	for(count=0;count<n;count++)
	scanf("%d",&age[count]);

   qsort(age,n,sizeof(age[0]),comfunc);

	for(count=0;count<n;count++)
	 if(!count)printf("%d",age[count]);
	 else
	 printf(" %d",age[count]);
	 
	 printf("\n");
   }
   return 0;
 }
