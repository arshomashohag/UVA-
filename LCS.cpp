#include<bits/stdc++.h>

using namespace std;

int chk[30];

int main(void)
{
char a[1005], b[1005], ch;
int as, bs, i, j;

while(gets(a))
    {

gets(b);
    as = strlen(a);
    memset(chk, 0, sizeof(chk));

    for(i=0; i<as; i++)
        chk[a[i]-'a']++;

    bs = strlen(b);
     sort(b, b+bs);
    i=0;
    while( ch = b[i])
    {

      if(chk[ch-'a'])
      {
          printf("%c",ch);
          chk[ch-'a']--;
      }
      i++;
    }
    printf("\n");

    }

    return 0;
}


