 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 
 int main(void)
 {
  int n,p,k;
  
  printf("Enter 1st number:");
  scanf("%d",&p);
  printf("Enter 2nd number:");
  scanf("%d",&n);
  
  k=pow(p,n);
  
  printf("The %dth power of %d is %d.",n,p,k);
  
  getch();
  return 0;  
 }
