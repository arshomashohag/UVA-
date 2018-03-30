 #include<stdio.h>
 #include<string.h>
 
 
 char str[100050],sub[1050];
 
 int main(void)
 {
  unsigned long int t,q,i,j,in,is,flag;
  
  while(scanf("%lu",&t)==1)
  {
   for(j=1;j<=t;j++)
   {
   scanf(" %[^\n]",str);
	scanf("%lu",&q);
	
	for(i=1;i<=q;i++)
	{
	 scanf(" %[^\n]",sub);
	 is=0;
	 flag=1;
	 for(in=0;str[in];in++)
	 {
	  if(sub[is]==str[in])
	   {
		 is++;
		continue;
	   }
	   else
	    is=0;
	   
	   if(is==(strlen(sub)))
       {
		 printf("y\n");
		 flag=0;
		}
	 }
	 if(flag)
	 printf("n\n");
	}
   }
  }
  return 0;
 }
