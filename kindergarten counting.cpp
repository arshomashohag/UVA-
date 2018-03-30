 #include<stdio.h>
 
 char str[1000000];
 
 int main(void)
 {
  unsigned long long int count,i;
  
  while(gets(str))
  {
	i=0;
	count=0;
	while(str[i])
	{
	 if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) )
	 {
	   count++;
	   while(((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) &&  str[i])
	   i++;
	  }
	  else
	  i++;
	}
	printf("%llu\n",count);
  }
  return 0;
 }
