#include<bits/stdc++.h>
#define lld long long int

using namespace std;

int main(void)
{
  char in[1000001];
  lld i, j, k, l;

  while(scanf("%[^\n]",in)==1 && in[0] !='.')
  {
      getchar();

      j=1;
      l = strlen(in);
     for(i=0; i<l; i++)
     {
         if(in[i] != in[i%j])
            j++;
     }
     printf("%lld\n",(l/j));

  }
    return 0;
}
