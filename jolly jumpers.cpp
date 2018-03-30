 #include<stdio.h>
 #include<stdlib.h>
 
 int main(void)
 {
  int a[1000],i,n,j;
  

 while(scanf("%d",&n)==1)
 {
   i=0;
  while(n>=1)
  {
	scanf("%d",&a[i]);
	i++;
	n--;
  }
  j=1;
  while(i>=1)
  {
		if(abs(a[i]-a[i-1])>n || abs(a[i]-a[i-1]<1))
		 {
		   j=0;
		   break;
		 }
  }
 if(j)
   printf("Jolly");
 else
 printf("Not Jolly");
 }

return 0;
 }
