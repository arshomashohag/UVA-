#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstdlib>
#include<list>
#include<cctype>
#define lld long long int

using namespace std;

lld cn=1, out,t ,pry, prm, prd, bry, brm, brd,outd, outm, outy, car;



int main(void)
{
     scanf("%lld",&t);

     while(t--)
     {
        scanf("%lld%*c%lld%*c%lld",&prd,&prm,&pry);
        scanf("%lld%*c%lld%*c%lld",&brd,&brm,&bry);
        car=0;

        if(prd<brd)
        {
          prd = prd+30;
          car = 1;
        }
        outd = prd - brd + 1;

        brm = brm + car;
        car = 0;

        if(prm<brm)
        {
            prm = prm + 12;
            car = 1;
        }
        outm = prm - brm;

        bry = bry + car;
        car = 0;

        outy = pry - bry;

       if(outm>=12 || (outm==11 && outd>=31))
        outy=outy+1;


        printf("Case #%lld: ",cn++);
        if(outy<0)
           printf("Invalid birth date\n");
        else if(outy>130)
            printf("Check birth date\n");
        else
            printf("%lld\n",outy);

     }

    return 0;
}





