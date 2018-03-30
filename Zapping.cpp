 #include<stdio.h>
 #include<stdlib.h>
 
 int main(void)
 {
  int test,a,b;
  int i,j;
  
  while(scanf("%d",&test)==1)
  {

	  scanf("%d%d",&a,&b);
	  i=abs(a-b);
	  j=(100-a)+b;
	  printf("%d\n",i<=j?i:j);
      }
  }
  return 0;
 }
