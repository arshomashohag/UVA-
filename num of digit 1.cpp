 #include<stdio.h>
 #include<conio.h>
 
 int main(void)
 {
   int n,n_of_1=0;
   unsigned long long number=0;
   
   scanf("%d",&n);
   
  if(n)
   while(1)
   {
	n_of_1++;
	number=number*10+1;
	if(!(number%n))
	break;
   }
  printf("%d\n",n_of_1);
  
  getch();
  return 0;
 }
