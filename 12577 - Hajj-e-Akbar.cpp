#include<cstdio>
#include<cstring>

int main(void)
{
  char str[50];
  int c=1;

  while(scanf("%s",str) && strcmp(str,"*"))
  {
      if(strcmp(str,"Hajj") ==0)
        printf("Case %d: Hajj-e-Akbar\n",c);

         else if(strcmp(str,"Umrah")==0)
        printf("Case %d: Hajj-e-Asghar\n",c);


     c++;
  }
  return 0;
}
