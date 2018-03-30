#include<cstdio>
#include<cmath>

int a,b,c,t,cn=1,ck;

int main(void)
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
            ck=pow(a,2)-(pow(b,2)+pow(c,2));
        else if(b>a && b>c)
          ck=pow(b,2)-(pow(a,2)+pow(c,2));
        else if(c>a && c>b)
            ck=pow(c,2)-(pow(b,2)+pow(a,2));
        else
            ck=1;

        if(!ck)
            printf("Case %d: yes\n",cn++);
        else
            printf("Case %d: no\n",cn++);
    }
    return 0;
}
