#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void)
{
 char str[20],ar[5];
 int n,i,j,dv,p,di;
 
 unsigned long long int lv;
 
 while(scanf("%d",&n)==1)
 {
  for(j=1;j<=n;j++)
  {
	scanf(" %[^\n]",str);
  i=0;
  lv=0;
  p=2;
  di=0;
  while(str[i])
  {
   if((str[i])>='A' && str[i]<='Z')
    {
	 lv=lv+(str[i]-65)*pow(26,(p--));
	}
   else if(isdigit(str[i]))
   {
	ar[di]=str[i];
	di++;
   }
   i++;
  }
  ar[di]='\0';
  dv=atoi(ar);
  
  if(abs(lv-dv)<=100)
  printf("nice\n");
  else
  printf("not nice\n");
  }
 }
 
 return 0;
}
