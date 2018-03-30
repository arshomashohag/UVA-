 #include<stdio.h>
 
 int main(void)
 {
   int m,test,angle,flag;
   
   while(scanf("%d",&test)==1)
   {
  flag=0;
	 for(m=0;m<=30;m++)
	 {
	   angle=m*6;
	   if(angle==test)
	   {
			flag=1;
			break;
	   }
	   
	 }
	 if(flag)
	 printf("Y\n");
	 else
	 printf("N\n");
   }
   
   return 0;
 }
