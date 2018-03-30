#include<cstdio>
#include<cstring>

int a,b,n,cn=1,t,l;
char ar[120];

int main(void)
{
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        getchar();
        gets(ar);
        b=0;
        l=strlen(ar);
        for(a=0;a<l;a++)
        {
          if(ar[a]=='.')
             {
                 b++;
                 a=a+2;
             }
        }
        printf("Case %d: %d\n",cn++,b);


    }
    return 0;
}
