#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int year[100000];
 int main(void)
 {
  int leap_y,hulu,bulu,i,count;
  FILE *fp;
  
  if((fp=fopen("D:\\uva.txt","r+"))==NULL)
  {
	exit(1);
  }

for(i=0,count=0;;i++)
{
 fscanf(fp,"%d",&year[i]);
 count++;
 if(EOF)
 break;
 }
 for(i=0;i<=count;i++)
 {
   leap_y=0;
   hulu=0;
   bulu=0;
   if((!(year[i]%4) && (year[i]%100)) || !(year[i]%400))
   {
    leap_y=1;
    printf("This is leap year.\n");
   }
   if(!(year[i]%15))
   {
	hulu=1;
	printf("This is huluculu festival year.\n");
   }
   if(!(year[i]%55)&& leap_y)
   {
	bulu=1;
	printf("This is bulukulu festival year.\n");
   }

   if((!(leap_y) && !(hulu)) && !(bulu))
   printf("This is an ordinary year.\n");
   
    printf("\n");
  }
getch();
  return 0;
 }
