 #include<stdio.h>
 #include<ctype.h>
 
 char str[1200];
 
 int main(void)
 {
  int i,flag;
  char ch1,ch2;
  
  
  while(scanf(" %[^\n]",str))
  {
   if(str[0]=='*')
   break;
   i=0;
   flag=0;
   ch1=str[0];
   if(str[0]>=65 && str[0]<=92)
   ch2=ch1+32;
   else
   ch2=ch1-32;
   while(str[i])
   {
	if(i && str[i-1]==' ')
	{
	  if(ch1!=str[i] && ch2!=str[i])
	  {
			flag=1;
			break;
	  }
	}
	i++;
   }

   if(flag)
   printf("N\n");
   else
   printf("Y\n");
  }
  
  return 0;
 }
