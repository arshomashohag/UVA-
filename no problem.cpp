 #include<stdio.h>

 int main(void)
 {
  int num_of_month,case_num=1,INITIAL_PROB,problems_created[13],problems_needed[13];

  while(scanf("%d",&INITIAL_PROB)==1)
  {
   if(INITIAL_PROB<0)
   break;

   for(num_of_month=1;num_of_month<=12;num_of_month++)
   scanf("%d",&problems_created[num_of_month-1]);

   for(num_of_month=1;num_of_month<=12;num_of_month++)
   scanf("%d",&problems_needed[num_of_month-1]);

   printf("Case %d:\n",case_num);

   for(num_of_month=1;num_of_month<=12;num_of_month++)
   {
	if(INITIAL_PROB>=problems_needed[num_of_month-1])
      {
	   printf("No problem! :D\n");
       INITIAL_PROB=INITIAL_PROB-problems_needed[num_of_month-1];
	  }
   else
	 printf("No problem. :(\n");

  INITIAL_PROB=INITIAL_PROB+problems_created[num_of_month-1];
  }
  case_num++;
 }
 return 0;
}
