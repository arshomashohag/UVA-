 #include<stdio.h>
 #include<ctype.h>
 
 int main(void)
 {
  int i,j,k;
  
  char str[50];
  
  while(scanf(" %[^\n]",str)==1)
  {
   i=0;
   while(str[i])
   {
	if(isalpha(str[i]))
	{
	 if(str[i]>='A' && str[i]<='C')
	 printf("2");
	 else
	 if(str[i]>='D' && str[i]<='F')
	 printf("3");
	  else
	 if(str[i]>='G' && str[i]<='I')
	 printf("4");
	  else
	 if(str[i]>='J' && str[i]<='L')
	 printf("5");
	  else
	 if(str[i]>='M' && str[i]<='O')
	 printf("6");
	  else
	 if(str[i]>='P' && str[i]<='S')
	 printf("7");
	  else
	 if(str[i]>='T' && str[i]<='V')
	 printf("8");
      else
	 if(str[i]>='W' && str[i]<='Z')
	 printf("9");
	}
	else if(isdigit(str[i]))
	printf("%c",str[i]);
	else
	printf("%c",str[i]);
	
	i++;
   }
   printf("\n");
  }
  return 0;
 }
