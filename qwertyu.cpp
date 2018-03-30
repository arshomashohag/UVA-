 #include<stdio.h>
 
 char input_str[1000];
 int main(void)
 {
  char string[]="`12334567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./",ch=']';
  int ini,check,flag;
  
  while(gets(input_str))
  {
   for(ini=0;input_str[ini];ini++)
   {
	flag=0;
	for(check=0;string[check];check++)
	{
	if(input_str[ini]==92)
	{
	printf("%c",ch);
	flag=1;
	break;
	}
   else if(input_str[ini]==string[check])
	 {
	   printf("%c",string[check-1]);
	   flag=1;
	   break;
	 }
	}
	if(!flag)
	  printf("%c",input_str[ini]);
   }
   printf("\n");
  }
  return 0;
 }
