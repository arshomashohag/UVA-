 #include<stdio.h>

 int main(void)
 {
  int n,n_b,count_1,count_2,count,rest,rest1,rest2,temp;


 while(scanf("%d",&n)==1)
  {
  if(!n)
  break;
   temp=n;
    count=0;
	for(;;)
   {
	rest=temp/3;
	count=rest+count;
	temp=rest+(temp%3);
	if(temp==2 || temp==1)
	break;
   }
   temp=n;
   count_1=0;
   rest1=(temp+1)/3;
   count_1=rest1+count_1;
   temp=rest1+((temp+1)%3);

 if(temp>2)
   for(;;)
   {
	rest1=(temp/3);
	count_1=rest1+count_1;
	temp=rest1+(temp%3);
	if(temp==2 || temp==1)
	break;
   }

    temp=n;
    count_2=0;
   rest2=(temp+2)/3;
   count_2=rest2+count_2;
   temp=rest2+((temp+2)%3);

  if(temp>2)
   for(;;)
   {
	rest2=(temp/3);
	count_2=rest2+count_2;
	temp=rest2+(temp%3);
	if(temp==2 || temp==1)
	break;
   }
   if(count>=count_1 && count>=count_2)
   printf("%d\n",count);
 else if(count_1>=count && rest2<2)
   printf("%d\n",count_1);
   else
   printf("%d\n",count_2);
  }
  return 0;
 }
