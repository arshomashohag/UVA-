#include<cstdio>
#include<cstring>

int grid,i,j,t,k,indi,indj,count_t;
long long int g_arr[10][10],res,temp;
int  checki[10],checkj[10];


int main(void)
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&grid);
        memset(checki,0,sizeof(g_arr));
        memset(checkj,0,sizeof(g_arr));
        res=0;

        for(i=0; i<grid; i++)
        {
         for(j=0; j<grid; j++)
        {
            scanf("%lld",&g_arr[i][j]);
        }
       }

        for(k=0;k<grid;k++)
        {
          temp=2000;
          count_t=0;
        for(i=0;i<grid;i++)
        {
        for(j=0;j<grid;j++)
        {

           if(g_arr[i][j]<temp && checki[i] ==0 && checkj[j]==0)
           {
             if(count_t)
             {
              checki[indi]=0;
             checkj[indj]=0;
             }
             temp=g_arr[i][j];
             indi=i;
             indj=j;
             checki[indi]=1;
             checkj[indj]=1;
             count_t=1;
           }
        }

        }
   printf("%lld\n",temp);
      res=res+temp;
    }
    printf("%lld\n",res);
    }

    return 0;
}
