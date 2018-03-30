#include<cstdio>
#include<algorithm>

using namespace std;

long long int i,j,k,l,bal,max_b;
char ar[100006],ch;
int t;


int main(void)
{

    scanf("%d",&t);
    getchar();
    while(t--)
    {
      scanf("%[^\n]",ar);
      bal=0;
      max_b=0;
      for(i=0;ar[i];i++)
      {
          if(ar[i]=='(')
                bal=bal+1;
          else if(ar[i]==')')
            bal=bal-1;
          max_b=max(max_b,bal);
      }
      for(i=1;i<=max_b;i++)
        printf("(");
      for(i=1;i<=max_b;i++)
        printf(")");
      printf("\n");
      getchar();
    }
    return 0;
}
