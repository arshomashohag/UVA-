 #include<stdio.h>
 
 char str[1020];
 int main(void)
 {
  int ch[200]={0},i;
  while(gets(str))
  {
	i=0;
   while(str[i])
   {
	ch[str[i]-30]++;
	i++;
   }
   i=0;
   while(str[i])
   {
	 if((ch[str[i]-30]))
	 printf("%d %d\n",str[i],ch[str[i]-30]);
	 i++;
   }
  }
  
  return 0;
 }
