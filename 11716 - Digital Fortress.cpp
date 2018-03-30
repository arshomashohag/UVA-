#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define lld long long int

using namespace std;


int main(void)
{
 lld i, j, k, l, t, sqr;
 string in, out;

 scanf("%lld",&t);
 getchar();
 while(t--)
 {

    getline(cin,in);

    l = in.size();
    sqr = sqrt(l);
    if( (sqr*sqr)!= l )
    {
        printf("INVALID\n");
    }
    else
    {
      out.clear();
      for(i=0; i<sqr ; i++)
      {
          for(j=i; j<l; j+=sqr)
          {
            out.push_back(in[j]);
          }
      }
      cout<<out<<endl;
    }
 }

    return 0;
}
