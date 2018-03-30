#include<stdio.h>
#include<stdlib.h>
 int main (void)
  {
  char str[12],str1[10];
  int i,hour,minute;
  float angleA,angleB,angle;
  
  while(gets(str))
  {
   hour=atoi(str);
   i=0;
  while(str[i])
  {
   if(str[i]==':')
   {
	str1[0]=str[i+1];
	str1[1]=str[i+2];
	str1[2]='\0';
	break;
   }
   i++;
  }
  minute=atoi(str1);
  if(hour==0 && minute==0)
  break;
  angleA=6*minute;
  angleB=30*hour+((float)minute/(float)2);

 angle=angleA-angleB;

  if(angle<0)
  angle=(-1)*(angle);
   if(angle>180)
   angle=360-angle;
   printf("%.3f\n",angle);
}

return 0;
	}
