 #include<stdio.h>
 
 int main(void)
 {
  int hour1,hour2,minute1,minute2,sleep_min;
  
  while(1)
  {
   scanf("%d",&hour1);
  scanf("%d",&minute1);
  scanf("%d",&hour2);
  scanf("%d",&minute2);

   if(hour1==0 && minute1==0)
   {
		if(hour2==0 && minute2==0)
		 break;
   }
   sleep_min=0;
   
   if(hour2<hour1)
   {
	sleep_min=(24-(hour1-hour2))*60-minute1+minute2;
   }
   
   else if(hour1==hour2)
   {
	if(minute1>minute2)
	sleep_min=(24-(hour1-hour2+1))*60+(60-minute1)+minute2;
	else if(minute1<minute2)
	sleep_min=minute2-minute1;
   }
   
   else
	sleep_min=(hour2-hour1)*60-minute1+minute2;
	
	printf("%d\n",sleep_min);
  }
  
  return 0;
 }
