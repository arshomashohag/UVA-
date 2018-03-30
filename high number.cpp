 #include<stdio.h>
 #include<conio.h>
 
 int main(void)
 {
  long long int ar[14],i,j,high1=0,high2=0,high3=0;

  
  for(i=0;i<10;i++)
  {
	scanf("%lld",&ar[i]);
	if(ar[i]>=high1)
	high1=ar[i];
  }
 for(i=0;i<10;i++)
 {
  if(ar[i]>=high2 && ar[i]!=high1)
  high2=ar[i];
 }

  for(i=0;i<10;i++)
 {
  if(ar[i]>=high3 && ar[i]!=high1 && ar[i]!=high2)
  high3=ar[i];
 }
printf("%lld\n%lld\n%lld",high1,high2,high3);

getch();
return 0;

 }
