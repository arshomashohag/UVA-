#include<stdio.h>

int main(void)
{
    unsigned long long int t,w,n,m,i,case_n=0,flag;

    while(scanf("%llu",&t)==1)
    {
        case_n=0;
        for(; t>0; t--)
        {
            scanf("%llu",&w);
            case_n++;
           if((w/2)%2)
             m=w/2;
           else
            m=w/2-1;
            flag=0;
            for(n=2; n<m; n++,m--)
            {
                if(n*m==w)
                {
                    flag=1;
                    if(n%2)
                        printf("Case %llu: %llu %llu\n",case_n,n,m);
                    else
                        printf("Case %llu: %llu %llu\n",case_n,m,n);
                    break;
                }
            }
            if(!flag)
                printf("Case %llu: Impossible\n",case_n);
        }

    }
    return 0;
}

