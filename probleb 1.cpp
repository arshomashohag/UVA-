 #include<stdio.h>
 
 int main(void)
 {
 int i;
 
 printf("Enter a number :");
 scanf("%d",&i);
 
 while(i!=1)
 {
  printf("%d ",i);
  if(i%2==0) (i=i/2);
  else (i=3*i+1);           
  if(i==1) printf("%d ",i);          
 }    
  return 0;
 }
