 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 
 int main(void)
 {
 int n,p;
 float f;
 double k;    
     
 printf("Enter 1st number:");
 scanf("%d",&n);
 printf("Enter 2nd number:");
 scanf("%d",&p);
 
 f=float(1/n);
 k=double(pow(p,f));
 
 printf("The %dth root of %d is %lf.",n,p,k);
 
 getch();
 return 0;    
 }
