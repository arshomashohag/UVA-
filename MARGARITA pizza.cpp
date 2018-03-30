 #include<stdio.h>

 int main(void)
 {
  int test,j,k,m,a,r,g,i,t;
  char str[620];
  
  while(scanf("%d",&test)==1)
   {
	for(j=1;j<=test;j++)
	{
	  scanf(" %s",str);
	  k=0;
	  m=0;
	  a=0;
	  r=0;
	  g=0;
	  i=0;
	  t=0;
	  while(str[k])
	  {
	   if(str[k]=='A')
	   a++;
	   else if(str[k]=='M')
	   m++;
	   else if(str[k]=='R')
	   r++;
	   else if(str[k]=='G')
	   g++;
	   else if(str[k]=='I')
	   i++;
	   else if(str[k]=='T')
	   t++;
	   
	   k++;
	  }
	 a=a/3;
	 r=r/2;
	if(a<=m && a<=r && a<=g && a<=i && a<=t)
	 printf("%d\n",a);
	 else if(m<=a && m<=r && m<=g && m<=i && m<=t)
	 printf("%d\n",m);
	 else if(r<=a && r<=m && r<=g && r<=i && r<=t)
	 printf("%d\n",r);
	 else if(g<=a && g<=r && g<=m && g<=i && g<=t)
	 printf("%d\n",g);
	 else if(i<=a && i<=r && i<=g && i<=m && i<=t)
	 printf("%d\n",i);
	 else if(t<=a && t<=r && t<=g && t<=i && t<=m)
     printf("%d\n",t);

	}
  }
  return 0;
 }
