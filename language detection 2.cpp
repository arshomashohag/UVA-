#include<cstdio>
#include<cstring>

int main(void)
{
  char str[50];
  int c=1;

  while(scanf("%s",str))
  {
      if(strcmp(str,"HELLO") ==0)
        printf("Case %d: ENGLISH",c);
      else if(strcmp(str,"HOLA")==0)
        printf("Case %d: SPANISH",c);
      else if(strcmp(str,"HALLO")==0)
        printf("Case %d: GERMAN",c);
         else if(strcmp(str,"BONJOUR")==0)
        printf("Case %d: FRENCH",c);
      else if(strcmp(str,"CIAO")==0)
        printf("Case %d: ITALIAN",c);
         else if(strcmp(str,"ZDRAVSTVUJTE")==0)
        printf("Case %d: RUSSIAN",c);
      else if(strcmp(str,"#"))
        printf("Case %d: UNKNOWN",c);

        if(strcmp(str,"#")==0)
            break;

           else
            printf("\n");

     c++;
  }
  return 0;
}
