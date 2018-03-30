#include<cstdio>

 long long int test, n, a[1009],b;
 int i,j;


int main(void)
{
   scanf("%lld",&test);

   while(test--)
   {
       scanf("%lld",&n);
       for(i=0;i<n;i++)
       {
          scanf("%lld",&a[i]);
       }
       b=0;
       for(i=n-1;i>0;i--)
       {
           for(j=i-1; j>=0; j--)
            if(a[j]<=a[i])
            b++;
       }
       printf("%lld\n",b);
   }
   return 0;
}
