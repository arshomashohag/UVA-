 #include<stdio.h>
 
 int main(void)
 {
  int first_number,limit,house_number,temp,digit[10],digit_ini,flag,test;
  
  while(scanf("%d%d",&first_number,&limit)==2)
  {
    house_number=0;
    for(;first_number<=limit;first_number++)
     {
      temp=first_number;
      flag=0;
      for(digit_ini=0;temp;digit_ini++)
       {
         digit[digit_ini]=temp%10;
         temp=temp/10;

		 for(test=digit_ini-1;test>=0;test--)
          if(digit[digit_ini]==digit[test])
           {
	       flag=1;
	       break;
           }
         if(flag)
           break;
  
        }
       if(!flag)
         house_number++;
   
       }
   printf("%d\n",house_number);
  }
	return 0;
 }
