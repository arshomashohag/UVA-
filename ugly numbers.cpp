 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int ugly_n=1,ugly_nt;
  
  int i;
  for(;;)
  {
	if(ugly_n==1)
	i++;
	else if(!(ugly_nt%2) || !(ugly_nt%3) || !(ugly_nt%5))
	{
	 ugly_nt=ugly_n;
	while(!(ugly_nt%2))
	 {
	   ugly_nt=ugly_nt/2;
	 }
	 
    while(!(ugly_nt%3))
	 {
	   ugly_nt=ugly_nt/3;
	 }
   while(!(ugly_nt%5))
	 {
	   ugly_nt=ugly_nt/5;
	 }
  if(ugly_nt==1)
  i++;
	}
	if(i==1500)
	{
	printf("The 1500'th ugly number is <%llu>.",ugly_n);
	break;
	}
	ugly_n++;
  }
  return 0;
 }
