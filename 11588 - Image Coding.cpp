#include<cstdio>
#include<cstring>

char str[21][21],ch;
long long int x,i,j,k,high,r,c,m,n,case_n=1;
long long int res;
long long int car[27];

int main(void)
{
  scanf("%d",&x);
  while(x--)
  {
      res=0;
      memset(car,0,sizeof(car));
    scanf("%lld%lld%lld%lld",&r,&c,&m,&n);
    getchar();
    for(i=0;i<r;i++)
        gets(str[i]);

        for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
             {
                 ch=str[i][j];
                 car[ch-'A']++;
             }
         }
         high=0;
        for(i=0;i<26;i++)
        {
          if(car[i]>high)
            high=car[i];
        }

        for(i=0;i<26;i++)
            if(car[i]==high)
            res=res+car[i]*m;
        else
            res=res+car[i]*n;
        printf("Case %lld: %lld\n",case_n,res);

        case_n++;
  }
  return 0;
}
