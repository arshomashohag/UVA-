 #include<stdio.h>
 
 int main(void)
 {
   int t,x,y,z,i,th,whfe,extA;
   float paid,phc;
  
  while(scanf("%d",&t)==1)
  {
   for(i=1;i<=t;i++)
   {
	 scanf("%d%d%d",&x,&y,&z);
	  th=x+y;
	  phc=(float)(z/(float)th);
	  
	  paid=x*phc+(x-y)*phc;
	  
	 printf("%.0f\n",paid);
   }
  }
  return 0;
 }
