#include<stdio.h>
long long int arr[10000];
int a, b, c, d, e, f,i;
int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;

        i=6;
         while(i<=n)
         {
          arr[i]=arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6];
          i++;
         }
        printf("Case %d: %lld\n", ++caseno, arr[n]% 10000007);
    }
    return 0;
}
