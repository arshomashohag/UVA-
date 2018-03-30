#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

long long int i,j,k,n,t,flag;
int chk[10000000];

void seive(void)
{
    memset(chk,0,sizeof(chk));

    int lim=sqrt(10000000);

    for(i=2; i<=lim; i++)
    {

        if(chk[i]==0)
        {

            for(j=i*i; j<=10000000; j+=i)
                chk[j]=1;
        }
    }

}

int main(void)
{
    seive();
    while(scanf("%lld",&n) && n)
    {

        flag=0;
        j=n-2;
        for(i=2; i<=j; i++)
        {
         if(chk[i]==0 && chk[j]==0 && i+j==n)
            {
                printf("%lld = %lld + %lld\n",n,i,j);
                flag=1;
                break;
            }
           j--;
        }
        if(flag==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }

    return 0;
}

