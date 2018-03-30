 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<math.h>
 
 int main(void)
 {
  char str[100];
  double dec,len;
  int i,dig;
  
  while(1)
  {
  scanf(" %s",str);
   if(!atoi(str))
   break;
   len=strlen(str);
   len=len-1;
   i=len;
   while(i>=0)
   {
	if(str[i]=='0')
    {
	 i--;
	}
	else if(str[i]=='1')
	{
	 dig=1;
	  dec=dec+(double)pow(2.000,double(len-i))-1;
	  i--;
	}
	else if(str[i]=='2')
	{
	 dig=2;
	 dec=dec+(double)pow(2.000,(double)(len-i+1))-2;
	 i--;
	}
   }
   
   printf("%Lf\n",dec);
  }
  return 0;
 }
