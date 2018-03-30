#include<cstdio>
#include<iostream>
#define lld long long int

using namespace std;

lld n,out;
int t,cn;

int main(void)
{
   cin>>t;
   for(cn=1;cn<=t;cn++)
   {
       cin>>n;

       out=(n*(n-1))/2;

       if(out==0)
        printf("Case %d: %lld\n",cn,out);
       else if(out%2==0)
        printf("Case %d: %lld\n",cn,out/2);
        else
            printf("Case %d: %lld/2\n",cn,out);
   }

    return 0;
}
