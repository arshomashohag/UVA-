 #include<stdio.h>
 
 int main(void)
 {
  unsigned long int N,i,j,a,b;
  
  while(scanf("%lu%lu%lu",&N,&i,&j)==3)
  {
   if(i%2 && !(j%2))
   i=i+1;
   else if(!(i%2) && j%2)
   j=j+1;
   a=0;
   while(i!=j)
   {
	a++;
	if(i<j)
	{
	i+=1;
	j-=1;
	}
	else
	{
	 i-=1;
	 j+1;
	}
	
   }
   printf("%lu\n",a);
  }
  return 0;
 }
