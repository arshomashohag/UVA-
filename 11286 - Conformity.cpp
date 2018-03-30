#include<cstdio>
#include<iostream>
#include<map>
#include<utility>
#include<string>
#include<sstream>
#include<algorithm>
#define lld long long int
using namespace std;

int main(void)
{
   lld t, i, j[6], x, out, cm, tcm;
    map< string, int > mymap;
    map< string, int >::iterator it;
    string str;

    ostringstream os;

    while(scanf("%lld",&t) && t)
    {
     out=0;
     cm=0;
        mymap.clear();

      for(i=1; i<=t; i++)
        {
          for(x=0; x<5; x++)
          {
          scanf("%lld",&j[x]);
          }

          sort(j, j+5);

          for(x=0; x<5; x++)
          {
           os<<j[x];
          }

          str = os.str();
          os.str("");
          it = mymap.find(str);
          if(it==mymap.end())
          {
            mymap[str]=1;
            if(cm<=1)
            {
                cm=1;
                out++;
            }
          }
          else
          {
            tcm = (++mymap[str]);
            if(tcm>cm)
            {
                cm=tcm;
                out=tcm;
            }
            else if(tcm==cm)
            {
                out+=tcm;
            }
          }

         }

         printf("%lld\n",out);
    }

  return 0;
}
