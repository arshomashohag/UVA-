#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define lld long long int
#define Mx 10000000000
using namespace std;

lld i, j, k, sum, out, tot;
lld f[4], s[4], t[4];

char str[]="BGC", os[6], ts[6];


int main(void)
{
 while(scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld",&f[0],&f[1],&f[2],&s[0],&s[1],&s[2],&t[0],&t[1],&t[2])==9)
 {
    out = Mx;

    tot =f[0]+f[1]+f[2]+s[0]+s[1]+s[2]+t[0]+t[1]+t[2];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
               if(i!=j && j !=k && i!=k)
               {

               sum = f[i]+s[j]+t[k];
                sum = tot-sum;

                if(sum < out)
                {
                    out=sum;
                    os[0]=str[i];
                    os[1]=str[j];
                    os[2]=str[k];
                    os[3]='\0';
                }

                if(sum==out)
                {
                   ts[0]=str[i];
                    ts[1]=str[j];
                    ts[2]=str[k];
                    ts[3]='\0';

                    if(strcmp(os,ts)>0)
                        strcpy(os,ts);
                }

               }
            }
        }
    }

  printf("%s %lld\n",os,out);
 }

  return 0;
}
