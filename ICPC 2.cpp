#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
int t,n,i,j,k,l,cn=1,t_m,out,flag;
int minit_c[40],show_t,movie_n;
int minit_ani[40];
int minit_ac[40];
int minit_h[40];

char movie_type[100];
char type[4][30]={"Comedy","Action","Animation","Horror"};

int main(void)
{
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        scanf("%d\n%d",&show_t,&movie_n);
        int ind[40]={0};

        getchar();

        for(i=0;i<movie_n;i++)
        {
          scanf("%*s%*c%s%*c%d",movie_type,&t_m);

            for(j=0;j<4;j++)
                if(strcmp(movie_type,type[j])==0)
                {
                  if(j==0)
                    minit_c[ind[0]++]=t_m;
                  else if(j==1)
                    minit_ac[ind[1]++]=t_m;
                    else if(j==2)
                    minit_ani[ind[2]++]=t_m;
                    else if(j==3)
                    minit_h[ind[3]++]=t_m;

                }
         getchar();
        }


      flag=0;

      sort(minit_c,minit_c+ind[0]);
      sort(minit_ac,minit_ac+ind[1]);
      sort(minit_ani,minit_ani+ind[2]);
      sort(minit_h,minit_h+ind[3]);

        for(j=0;j<ind[0] ;j++)
            {
               for(k=0;k<ind[1] ;k++)
               {
                   for(i=0;i<ind[2] ;i++)
                   {
                       for(l=0;l<ind[3];l++)
                       {
                         if((out=minit_c[j]+minit_ac[k]+minit_ani[i]+minit_h[l])==show_t)
                         {
                           if(!flag)
                            printf("Case %d: %d\n",cn++,out);
                           flag=1;
                           break;
                         }
                       }
                   }
               }
            }
            if(!flag)
                printf("Case %d: Movie show canceled!\n",cn++);


    }
    return 0;

}
