#include<cstdio>
#include<iostream>

using namespace std;

long long int in, n, m, i, j;
int ar1[1000020], ar2[1000020], s, c, r;
char out[1000020];

int main(void)
{

   scanf("%lld",&n);

   while(n--)
   {
       scanf("%lld",&m);

       for(i=0;i<m;i++)
       {
           scanf("%d%d",&ar1[i],&ar2[i]);
       }

       c=0;
       for(i=m-1;i>=0;i--)
       {
         s = ar1[i]+ar2[i]+c ;
         c = s/10 ;
         r = s%10;
         out[i]=r+48;
       }

   out[m]='\0';

       if(c)
        printf("%d",c);

       printf("%s\n",out);

       if(n>0)
        printf("\n");
   }
    return 0;
}
