#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

#define lld  long long int

using namespace std;


int main(void)
{
    lld t, n, i, s, j, out, cn;
    string ar;
    vector< string > name;

    scanf("%lld",&t);

    while(t--)
    {
       scanf("%lld",&n);
       name.clear();

       for(i=0; i<n; i++)
       {
           cin>>ar;
           name.push_back(ar);
       }


    sort(name.begin(), name.end());

       out=0;
       j=-1;
       n--;
       for(i=0; i<n; i++)
       {
           s=0;
          while(name[i][s]==name[i+1][s])
          {
            s++;
          }
          s++;

          if(s>=j)
          {
            out=out+s;
          }
          else
           out=out+j;

          j=s;
       }

      out = out + j;

      printf("%lld\n",out);
    }

    return 0;
}
