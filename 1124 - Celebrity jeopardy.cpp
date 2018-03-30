 #include<stdio.h>

char str[2000];

 int main(void)
 {
  while(scanf(" %[^\n]",str)==1)
  {
   printf("%s\n",str);
  }
  return 0;
 }
