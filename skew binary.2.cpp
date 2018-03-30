#include<stdio.h>
#include<string.h>
#include<math.h>

char ar[50];

int main(void)
{
 int k,t,i;
 long long int dec;
 
 while(scanf(" %[^\n]",ar)==1)
 {
  if(ar[0]=='0' && ar[1]=='\0')
  break;
  k=1;
  dec=0;
  i=strlen(ar)-1;
  
  while(i>=0)
  {
   if(ar[i]!='0')
    {
     t=ar[i]-48;
     dec=dec+ t*(pow(2,k)-1);
   	}
   	k++;
   	i--;
  }
  printf("%lld\n",dec);
 }
 return 0;
}
