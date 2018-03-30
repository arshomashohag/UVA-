#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int ar[110][110];
char ch;
int n,m,i,j,k,cn=1;

int main(void)
{

    while(true)
    {
        cin>>n>>m;
        if(n==0 && m==0)
            break;

        if(cn>1)
            printf("\n");

        getchar();
        memset(ar,0,sizeof(ar));
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                 cin>>ch;
                if(ch=='*')
                {
                    ar[i][j]=-1;

                    if(ar[i][j-1]!=-1)
                        ar[i][j-1]++;

                    if(ar[i][j+1]!=-1)
                        ar[i][j+1]++;

                    if(ar[i+1][j]!=-1)
                        ar[i+1][j]++;

                    if(ar[i-1][j]!=-1)
                        ar[i-1][j]++;

                    if(ar[i+1][j+1]!=-1)
                        ar[i+1][j+1]++;

                    if(ar[i-1][j+1]!=-1)
                        ar[i-1][j+1]++;

                    if(ar[i-1][j-1]!=-1)
                        ar[i-1][j-1]++;

                    if(ar[i+1][j-1]!=-1)
                        ar[i+1][j-1]++;
                }

            }
        }



        printf("Field #%d:\n",cn++);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
              if(ar[i][j]==-1)
                printf("*");
              else
                printf("%d",ar[i][j]);
            }
            printf("%\n");
        }
    }

    return 0;
}


