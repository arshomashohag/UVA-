 #include<stdio.h>
 char str[5000];
 
 int main(void)
 {
   unsigned int i;
  while(gets(str))
  {
   i=0;
   while(str[i])
   {
	 printf("%c",(str[i]-7));
	 i++;
   }
   printf("\n");
  }
  return 0;
 }
