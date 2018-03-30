#include<cstdio>
#include<cstring>

char str[10000],temp[1000];
int i,j,k;

int main(void)
{
 while(gets(str))
 {

   for(i=0;str[i];)
   {
       j=0;
     while(str[i]!=' ' && str[i]!='\0')
     {
      temp[j]=str[i];
      j++;
      i++;
     }
     temp[j]='\0';
      j=strlen(temp);
      for(i=j-1;i>=0;i--)
        printf("%c",temp[i]);

    if(str[i]!='\0')
       {
        printf(" ");
        i++;
       }
   printf("\n");
   }

 }
return 0;
}
