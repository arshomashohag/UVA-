 #include<stdio.h>
 #include<conio.h>
 
 int main(void)
 {
  int a;
  
  for(a=1;a<100;)
  {
   printf("%d\n",a);
   if(a<9)
	a=a+2;
	else
	a=a+11;
  }
  
  getch();
  return 0;
  
 }
