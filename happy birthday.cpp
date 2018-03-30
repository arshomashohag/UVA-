#include<stdio.h>

char str[200][150];
char song[][20]={"Happy","birthday","to","you",
                 "Happy","birthday","to","you",
                 "Happy","birthday","to","Rujia",
                 "Happy","birthday","to","you"};

int main(void)
{
  int n,i,j,k,flag=0;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    scanf(" %[^\n]",str[i]);

  for(i=0,j=0;;i++,j++)
  {
   printf("%s: %s\n",str[i],song[j]);
   
   if(j==15)
   j=-1;
   
   if(i==n-1)
   {
	i=-1;
	flag=1;
   }
   
   if(j==-1 && flag==1)
   break;
  }
  
  return 0;
}
