#include<bits/stdc++.h>
#define lld long long int

using namespace std;

int main(void)
{
   lld in, s, t, i, j;
    char ina[200], inb[200], s1[200], s2[200], s1a[200], s2a[200];

   scanf("%lld",&t);
   getchar();

   while(t--)
   {
     gets(ina);
     gets(inb);

    s = strlen(ina);
    i=0;
    while(i<s && ina[i]!='<')
        {
            printf("%c", ina[i]);
            i++;
        }
    i++;
    j=0;

    while(i<s && ina[i]!='>')
    {
        s1[j++]=ina[i];
        printf("%c",ina[i]);
        i++;
    }
    s1[j]='\0';

    i++;
    j=0;
    while(i<s && ina[i]!='<')
    {
        s1a[j++]=ina[i];
        printf("%c",ina[i]);
        i++;
    }
    i++;
    s1a[j]='\0';

    j=0;
    while(i<s && ina[i]!='>')
    {
        s2[j++]=ina[i];
        printf("%c",ina[i]);
        i++;
    }
    s2[j]='\0';

    i++;
    j=0;
    while(i<s)
    {
        s2a[j++]=ina[i];
        printf("%c", ina[i]);
        i++;
    }

    s2a[j]='\0';
  printf("\n");

  s =strlen(inb);
  i=0;

  while(i<s && inb[i]!='.')
    {
        printf("%c", inb[i]);
        i++;
    }
   printf("%s%s%s%s\n", s2,s1a, s1,s2a);

}

    return 0;
}
