 #include<stdio.h>
 
 char str[125];
 
 int main(void)
 {
  int i,case_n,j,t,n_of_sc,l;
  
  while(scanf("%d",&t)==1)
  {
   for(case_n=1;case_n<t;case_n++)
   {
	 scanf("%d",&l);
	 scanf(" %s",str);
	 i=0;
	 n_of_sc=0;
	 while(str[i])
	 {
	  if(str[i]=='.')
	  {
	   n_of_sc++;
	   if(str[i=i+1] && str[i=i+1])
	   i++;
	   }
	  else
	  i++;
	 }
	printf("Case %d: %d\n",case_n,n_of_sc);
   }
  }
  
  return 0;
 }
