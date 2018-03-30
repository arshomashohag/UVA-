#include<cstdio>

int t,q;
long long int l[10010],h[10010],i,data,input,count_m,out;
char name[10010][21], tem[20];


int main(void)
{
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&data);
        getchar();
        for(i=0;i<data;i++)
        {
            scanf("%s%*c%lld%lld",name[i],&l[i],&h[i]);

        }

        scanf("%d",&q);

        while(q--)
        {
            scanf("%lld",&input);
            count_m=0;
            for(i=0;i<data;i++)
             {
             if(input>=l[i] && input<=h[i])
             {
                 count_m++;
                 out=i;
             }

             }

             if(count_m==1)
                printf("%s\n",name[out]);
             else
                printf("UNDETERMINED\n");

        }

     if(t)
     printf("\n");
    }
    return 0;
}
