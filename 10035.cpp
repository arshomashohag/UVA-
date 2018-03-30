 #include<stdio.h>

int main(void)
{
 unsigned int a[1000],b[1000];
 int i,x=0,y=0,j,k,count;
 
 while(scanf("%u%u",&a[x],&b[y])==2)
 {
  if(a[x] && b[x])
  {
   x++;
   y++;
   continue;
  }
  
  count=0;
  while(a && b)
  {
   i=a%10;
   j=b%10;
   if((i+j)>=10)
    count++;
   a=a/10;
   b=b/10;
  }
 if(!count)
  printf("No carry operation.\n");
 else if(count==1)
 printf("%d carry operation.\n",count);
 else
 printf("%d carry operations.\n",count);
 }
 
 return 0;
}
