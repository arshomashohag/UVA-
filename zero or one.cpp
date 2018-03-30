 #include<stdio.h>
 
 int main(void)
 {
  int alice,beto,clara;
  
  while(scanf("%d%d%d",&alice,&beto,&clara)==3)
  {
  if((alice==beto) && (beto==clara))
    printf("*\n");
   else if(alice==beto)
   printf("C\n");
   else
	if(alice==clara)
	  printf("B\n");
   else if(beto==clara)
	printf("A\n");
	
   }
   
   return 0;
 }
