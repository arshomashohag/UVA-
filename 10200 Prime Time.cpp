#include<bits/stdc++.h>

using namespace std;


long long int i,j,a,b,prime,notprime,na,nb;
int chk[10000002];
bitset<5000002> bs;

double out;

void seive(void)
{

    int lim=sqrt(10000002);
    bs.set();
    chk[0]=chk[1]=0;
    chk[2]=1;

    for(i=3; i<=lim; i+=2)
    {
        if(bs[i]==0)
        {

            for(j=i*i; j<=10000002; j+=i)
                 {
                     bs[]
                 }
        }
    }

}

int main(void)
{
    seive();
    while(scanf("%lld%lld",&a,&b)==2)
    {
        prime=0;
        notprime=0;

        while(a<=b)
        {
            na=(a*a)+a+41;
            nb=(b*b)+b+41;
            if(chk[na]==0)
                prime++;
                else
                    notprime++;
            if(a!=b)
            {
            if(chk[nb]==0)
                prime++;
            else
                notprime++;
            }

            a++;
            b--;
      }

       if(prime)
        out=(double)(prime*100)/(double)(prime+notprime);


    printf("%0.2lf\n",out);

    }

    return 0;
}

