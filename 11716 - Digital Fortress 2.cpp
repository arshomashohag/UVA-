#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define lld long long int

using namespace std;


int main(void)
{
 lld i, j, k, l, t, sqr;

 char in[10006], out[10006];

 scanf("%lld",&t);

 while(t--)
 {
     getchar();
     scanf("%[^\n]",in);

    l = strlen(in);

    sqr = sqrt(l);
    if( (sqr*sqr)!= l )
    {
        printf("INVALID\n");
    }
    else
    {
     k=0;
      for(i=0; i<sqr ; i++)
      {
          for(j=i; j<l; j+=sqr)
          {
             out[k++]=in[j];
          }
      }
       out[k]='\0';
       printf("%s\n", out);
    }
 }

    return 0;
}

