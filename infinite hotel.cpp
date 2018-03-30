 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int s,d,m;
  
  while(scanf("%llu%llu",&s,&d)==2)
  {
   m=0;
	while(m<d)
	{
	 m=s+m;
	 s++;
	}
	printf("%llu\n",(s-1));
  }
  
  return 0;
 }
