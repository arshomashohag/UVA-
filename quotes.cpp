 #include<stdio.h>

int main(void)
{
 char str[10000];
 unsigned int i,j,check;
 
 while(scanf("%[^\n]",str)==1)
 {
  i=0;
  check=1;
  while(str[i])
  {
   if((str[i]==34) && check==1)
   {

	 str[i]=39;
	 check=2;
  }
  else if((str[i]==34) && check==2)
   check=1;
   
   i++;
  }
  printf("%s\n",str);
 }

return 0;
}
