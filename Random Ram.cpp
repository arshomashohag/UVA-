#include<cstdio>
#include<cstring>
#define lld long long int

lld t,i,j,out,l;
char m[13];

int main(void)
{
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        scanf("%s",m);
        out=1;
        l=strlen(m);
        for(i=0;i<l-1;i++)
        {
            j=0;
          j=j*10+m[i]-48;
          j=j*10+m[i+1]-48;

          if(j<=26 && j>0)
            {
                out++;
            }
        }
        out=out+(out-2);
        printf("%lld\n",out);
getchar();
    }
    return 0;
}
