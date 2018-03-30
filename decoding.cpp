 #include<stdio.h>
 #include<stdlib.h>
 #include<ctype.h>
 
 char str[500],str2[20];
 int main(void)
 {
   int t,i,j,k,case_n,temp;
   
   while(scanf("%d",&t)==1)
   {
	for(case_n=1;case_n<=t;case_n++)
	{
	 scanf(" %[^\n]",str);
	 i=0;
	 j=0;
	 k=1;
	 printf("Case %d: ",case_n);
	 while(str[i])
	 {
	  if(isalpha(str[i]))
       {
		 temp=i+1;
		 while(isdigit(str[temp]))
		  {
			str2[j++]=str[temp];
			temp++;
		  }
		  str2[j]='\0';
		  k=atoi(str2);
		}
		for(;k>=1;k--)
       printf("%c",str[i]);
		i=temp;
		j=0;
	 }
	 printf("\n");
	}
   }
   return 0;
 }
