#include<cstdio>


long long int st,m,out;

int main(void)
{
    scanf("%lld%lld",&st,&m);



       if(st%2)
            out=st/2 +1;
       else
        out=st/2;

        if(out%m)
            out=out+(m-(out%m));

       if(out>st)
        printf("-1\n");

       else
       printf("%lld\n",out);

    return 0;
}
