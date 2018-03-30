 #include<stdio.h>
 
 int main(void)
 {
  int case_num,num_of_paste,print_num,temp_print;
  
  for(case_num=1;case_num<=2000;case_num++)
  {
   scanf("%d",&print_num);
   
   if(print_num<0)
   break;
   
   num_of_paste=0;
   temp_print=1;
  if(print_num>1)
   for(;;)
   {
	if((temp_print*2)<print_num)
	 {
	  num_of_paste++;
	  temp_print=temp_print*2;
	  }
	 if((temp_print*2)>=print_num)
	 {
	 num_of_paste++;
	 break;
	 }
    }
 if(print_num>0)
  printf("Case %d: %d\n",case_num,num_of_paste);
   
  }
 return 0;
 }
