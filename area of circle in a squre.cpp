 #include<stdio.h>
 
 int main(void)
 {
  float r,pi=3.141592,ar;
  int t,i;
  
  while(scanf("%d",&t)==1)
  {
   for(i=1;i<=t;i++)
   {
	scanf("%f",&r);
	 ar=((2*r)*(2*r))-(pi*r*r);
	 printf("Case %d: %.2f\n",i,ar);
   }
  }
  return 0;
 }
