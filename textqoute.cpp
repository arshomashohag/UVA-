 #include<stdio.h>
 
 int main(void)
 {
  int flag=1,i;
  char str[5000];
  
  while(gets(str))
  {
	i=0;
	while(1)
	{
	 if(str[i]!='"')
	 {
	  printf("%c",str[i]);
	  i++;
	 }
	 else
	 {
	   if(flag==1)
	 {
	   printf("``");
	   flag=2;
	   i++;
	 }
	else
	 {
		printf("''");
		flag=1;
		i++;
	 }
	}
	if(str[i]=='\0')
	break;
   }
	printf("\n");
  }

return 0;
 }
