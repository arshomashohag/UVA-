#include<cstdio>
#include<iostream>
#include<algorithm>
#define lld long long int

using namespace std;

int main(void)
{
 lld n, r, i, j;
 lld ar[10005];

 while(scanf("%lld%lld",&n,&r)==2)
 {
     for(i=0; i<r; i++)
     {
         scanf("%lld",&ar[i]);
     }

     if(n>r)
     {
         sort(ar, ar+r);
         for(i=1, j=0; i<=n; i++)
         {
         if(i!=ar[j])
         {
            printf("%lld ",i);
         }
         else
            j++;
         }
         printf("\n");
     }
     else
        printf("*\n");
 }

    return 0;
}
