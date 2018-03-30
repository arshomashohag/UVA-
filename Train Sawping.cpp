#include<cstdio>


int l,n,t,i,j,sawp,ar[51];

int main(void)
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&l);

        for(i=0;i<l;i++)
        {
            scanf("%d",&ar[i]);

        }

        sawp=0;
        for(i=0;i<l-1;i++)
        {
            for(j=i;j<l;j++)
            {
                if(ar[i]>ar[j])
                {
                    t=ar[i];
                    ar[i]=ar[j];
                    ar[j]=t;
                    sawp++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",sawp);
    }
    return 0;
}
