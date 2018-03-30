#include<cstdio>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
    string a[120];

    char b[120];
    int i, j, k;

    while(scanf("%[^\n]",b) && b[0])
    {
      for(i=0;b[i];i++)
      {
        a[i].push_back( b[i] );
      }
       getchar();
    }

  i=0;
  while( (j=a[i].size())>0)
  {
    j= j-1;

    for(;j>=0;j--)
    {
    printf("%c",a[i][j]);
    }
     printf("\n");
    i++;
  }
return 0;
}
