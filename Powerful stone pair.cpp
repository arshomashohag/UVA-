#include<cstdio>
#include<cstdlib>
#define lld long long int

lld m,n,i,j,out,flag=0;

int main(void)
{
scanf("%lld",&m);
   scanf("%lld",&n);
   for(i=0;i<m;i++)
    for(j=0;j<m;j++)
   {
       scanf("%lld",&out);
       if(out==n)
        flag=1;
   }
   if(flag)
    printf("YES\n");
   else
    printf("NO\n");

   return 0;
}
