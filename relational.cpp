 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int first_n,second_n;
  int test;
  
  while(scanf("%d",&test)==1)
  {
   for(;test>=1;test--)
   {
	scanf("%llu%llu",&first_n,&second_n);
	
	if(first_n>second_n)
	printf(">");
	else if(first_n<second_n)
	printf("<");
	else if(first_n==second_n)
	printf("=");

  printf("\n");
  }
  }
return 0;
 }
