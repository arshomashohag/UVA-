 #include<stdio.h>
 
 char s[10000],t[10000];
 int main(void)
 {
  int i,flag,j,potaka;
  while(scanf("%s%s",s,t)==2)
  {
	i=0;
	potaka=0;
	while(s[i])
	{
   j=0;
   flag=0;
	  while(t[j])
	  {
		if(s[i]==t[j])
		{
		  flag=1;
		  t[j]='`';
		  break;
		}
		j++;
	  }
	  if(!flag)
	  {
	   potaka=1;
	   break;
	  }
	  i++;
	}
	if(potaka)
	printf("No\n");
	else
	printf("Yes\n");
  }
  
  return 0;
 }
