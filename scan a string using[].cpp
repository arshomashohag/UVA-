 #include<stdio.h>
 #include<conio.h>
 
 int main(void)
 {
 char address[80];
 
 printf("Enter your addres:\n");
 scanf("%[a-zA-Z:0-9 ]",address);
 
 printf(address);
 
 getch();
 return 0;    
     
 }
