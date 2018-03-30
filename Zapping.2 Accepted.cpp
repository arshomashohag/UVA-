  #include<stdio.h>

 int main(void)
 {
  int count_up,count_down,a,b;
  int i,j;

  while(scanf("%d%d",&a,&b)==2)
  {
   if((a>=0 && a<=99)&& (b>=0 && b<=99))
   {
	i=a;
	j=b;
   count_down=0;
   count_up=0;
	while(a!=b)
	{
    if(a==0 && b!=0)
	 {
	   a=99;
	   count_down++;
	 }
	 if(a!=b)
	 {
	 a--;
	 count_down++;
	 }
	}
	a=i;
	b=j;
	while(a!=b)
	{
    if(a==99 && b!=99)
	 {
	   a=0;
	   count_up++;
	 }
	 if(a!=b)
	 {
	  a++;
	 count_up++;
	}
	}
	if(count_up<=count_down)
	printf("%d\n",count_up);
	else
	 printf("%d\n",count_down);
   }
  }
  return 0;
 }
