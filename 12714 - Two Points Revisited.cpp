#include<cstdio>
#include<iostream>
#define lld long long int

using namespace std;



int main(void)
{
 lld cn=1, t, x1, x2, y1, y2, ox1, ox2, oy1, oy2;

 scanf("%lld",&t);
while(t--)
{
    scanf("%lld%lld%lld%lld",&x1, &y1, &x2, &y2);

    if(y1==y2)
    {
        oy1 = y1;
        if(y1==0)
            oy2 = y1+1;
        else
            oy2 = y1-1;
        if(x1>0)
        ox1 = ox2 = x1-1;
        else
           ox1 = ox2 = x1+1;
    }

    else if(x1==x2)
    {
        if(x1>0)
            ox1 = x1-1;
        else
            ox1 = x1+1;

        ox2 = x1;
        if(y1>0)
            oy1 = oy2 = y1-1;
        else
            oy1 = oy2 = y1+1;
    }

    else if(x1<x2 && y1<y2)
    {
       ox1 = x1+1;
       oy1 = y1;
       ox2 = x1;
       oy2 = y1+1;
    }

    else if(x2<x1 && y2<y1)
    {
       ox2 = x2+1;
       oy2 = y2;
       ox1 = x2;
       oy1 = y2+1;
    }

  else if(x1<x2 && y1>y2)
   {
     ox1 = x1;
     oy1 = y2;
     ox2 = x2;
     oy2 = y1;
   }

   else if(x1>x2 && y1<y2)
   {
      ox1 = x2;
      oy1 = y1;
      ox2 = x1;
      oy2 = y2;
   }

   printf("Case %lld: %lld %lld %lld %lld\n",cn++, ox1, oy1, ox2, oy2);

}
    return 0;
}
