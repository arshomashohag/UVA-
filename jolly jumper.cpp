 #include<stdio.h>
 
 
 int main(void)
 {
  int n[10000],a,b,flag;
  
  do
  {
   for(a=0;;a++)
   {
     scanf("%d",&n[a]);
     if(getchar()==13)
	  break;
	}
	
	for(a;a>=1;a--)
	{
  flag=0;
	   if(n[a]>n[a-1])
	   {
			b=n[a]-n[a-1];
			if(b>n[a]&& b<n[a-1])
			{
				flag=1;
				break;
			}
	   }
	   else
	   {
			b=n[a-1]-n[a];
			if(b>n[a-1]&& b<n[a])
			{
				flag=1;
				break;
			}
	   }
	}
	 if(flag)
	  printf("Not jolly");
	else
	printf("Jplly");
  }while(n);
  
  return 0;
 }
