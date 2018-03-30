 #include<stdio.h>
 
 int str[100];
 
 int main(void)
 {
  unsigned long long int i,n,t;
  int d,j;
  
  while(scanf("%llu",&i)==1)
  {
  if(i==0)
   break;
   n=0;
   j=0;
   while(i)
   {
	d=i%2;
	if(d)
	  n++;
	str[j]=d;
	i=i/2;
	j++;
   }
 printf("The parity of ");
 j=j-1;
 while(j>=0)
 {
   printf("%d",str[j]);
   j--;
 }
 
 printf(" is %llu (mod 2).\n",n);
}
  
  return 0;
 }
