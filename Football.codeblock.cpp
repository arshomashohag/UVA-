#include<stdio.h>


unsigned long int N,G,I,J;
int sr[10000],rr[10000],p;

int main(void)
{

    while(scanf("%lu%lu",&N,&G)==2)
    {
        for(I=0; I<N; I++)
        {
            scanf("%d%d",&sr[I],&rr[I]);
        }
        p=0;
        I=0;
        while(G>0)
        {
            for(J=0; J<N; J++)
            {
                if(sr[J]>rr[J])
                    p=p+3;

                else if(rr[J]-sr[J]==I)
                {
                    if(G-(I+1)>=0)
                    {
                        G=G-I-1;
                        p=p+3;
                    }
                    else if(G-I==0)
                    {
                        G=G-I;
                        p++;
                    }
                }
            }
            I++;
            if(I>G)
                break;
        }
        printf("%lu\n",p);
    }
    return 0;
}
