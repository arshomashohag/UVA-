 #include<stdio.h>
 
 int n[1200];
 
 int main(void)
 {
  int i,count,j,t,temp,flag=1;
  
  while(scanf("%d",&t)==1)
  {
   for(i=0;i<t;i++)
   scanf("%d",&n[i]);
   count=0;
  for(i=0;i<t;i++)
   {
	for(j=i;j<t;j++)
    {
	  flag=0;
	 if(n[i]>n[j])
	  {
	    temp=n[i];
	    n[i]=n[j];
	    n[j]=temp;
	    flag=1;
	    count++;
	   }
     }
   }
   
   printf("Minimum exchange operations: %d\n",count);
 }
 return 0;
}
