#include<cstdio>
#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
#include<cmath>

#define lld long long int

using namespace std;

vector<lld> prime;

void seive(void)
{
    bitset<16020> bt;
    bt.set();
    lld i, j, lim = sqrt(32020);
    prime.push_back(2);

    for(i=3; i<lim; i+=2)
    {
        if(bt[i>>1])
        {
            prime.push_back(i);

            for(j=i*i; j<=32020; j+=i+i)
                bt[j>>1]=0;
        }
    }

    while(i<=32020)
    {
        if(bt[i>>1])
        {
            prime.push_back(i);
        }
        i = i+2;
    }
}

int main(void)
{
seive();
lld a, b, i, j, out, dif, p, ov, vs, cn=1, c;
bool flag;
vector<lld> outn;
 while(scanf("%lld%lld",&a,&b) && (a||b))
 {
     if(cn>1)
        printf("\n");
     else
        cn++;

     c = 1;
    for(i=0; (p=prime[i])<=b;)
    {


        if(p>=a)
        {
            if( ( (dif=prime[i+1]-p) == (prime[i+2]-prime[i+1]) ) && prime[i+1]<=b && prime[i+2]<=b)
            {
                outn.push_back(p);
                outn.push_back(prime[i+1]);
                outn.push_back(prime[i+2]);

                j=i+3;
                flag=true;
                vs=3;

                while( ((prime[j]-prime[j-1])==dif) )
                {
                    if(prime[j]<=b)
                        {
                            outn.push_back(prime[j]);
                            vs++;
                        }
                    else
                    {
                        flag=false;
                        break;
                    }

                    j++;
                }
                i = j-1;

                if(flag)
                {
                    if(c>1)
                        printf("\n");
                    else
                        c++;
                    for(ov=0; ov<vs; ov++)
                     {
                         printf("%lld", outn[ov]);
                         if(ov<(vs-1))
                            printf(" ");
                     }
                     outn.clear();
                }
                else
                    outn.clear();

            }
            else
                i++;
        }
      else
        i++;
    }


 }

    return 0;
}
