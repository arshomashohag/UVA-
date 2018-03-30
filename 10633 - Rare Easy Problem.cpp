#include<bits/stdc++.h>
#define lld long long int

using namespace std;


int main(void)
{
    lld in, t, i, s, inc;
    bool flag;

    while(scanf("%lld",&in) && in)
    {
        flag = true;
        s=0;
         inc = in/10;

        for(i=in+inc; flag; )
        {
            t = i - (i/10);
            if(t==in)
            {
                if(s==0)
                {
                    printf("%lld",i);
                    s++;
                }
                else
                    printf(" %lld",i);
                i++;
             }
            else if(t<in)
            {
              i = i+(in-t);
            }

            else if(t>in)
            {
                flag=false;
                printf("\n");
            }
        }
    }


    return 0;
}
