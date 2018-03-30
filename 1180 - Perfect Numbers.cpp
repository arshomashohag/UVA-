#include<cstdio>
#include<cmath>
#include<cstring>

#define lld long long int

lld out,in,n,i,j,chk;
char ar[100000][5];


int main(void)
{
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%*c",&in);

       if(in==2 || in==3 || in==5 || in==7 || in==13 || in==17)
       {
            strcpy(ar[i-1],"Yes");
       }


        else
            strcpy(ar[i-1],"No");
        }
    for(i=0;i<n;i++)
        printf("%s\n",ar[i]);

    return 0;
}
