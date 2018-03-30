#include<cstdio>
#include<iostream>

using namespace std;


long long int n,a,m,q,i,j,k,chk[1000002];

int main(void)
{

   cin>>n;
   k=1;
   for(i=1;i<=n;i++)
   {
       cin>>a;
       for(j=1;j<=a;j++)
          chk[k++]=i;
    }

   cin>>m;

   for(i=1;i<=m;i++)
   {
       scanf("%lld",&q);
       cout<<chk[q]<<endl;
   }
    return 0;
}
