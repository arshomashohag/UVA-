#include<cstdio>
#include<cstring>

using namespace std;

char in[10000][100000];
long long int i,j,sum,k,n;

int main(void)
{
    i=0;
  while(gets(in[i]))
  {

      for(i=1;;i++)
      {
          gets(in[i]);
          if(strlen(in[i])==0)
            break;
      }
      n=i;
      sum=0;
      for(i=0;i<n;i++)
      {
        for(j=0;in[i][j];j++)
          {

            if(in[i][j]>=48 && in[i][j]<=57)
            {
                sum=sum+(in[i][j]-48);
            }
            else if(in[i][j]=='!')
                printf("\n");

            else
            {
                while(sum>0)
                {
                    if(in[i][j]=='b')
                        printf(" ");
                    else
                        printf("%c",in[i][j]);
                  sum--;
                }
            }
          }
         printf("\n");
      }

printf("\n");
      i=0;
  }
  return 0;
}
