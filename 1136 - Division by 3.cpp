#include<cstdio>
#include<cstring>

long long int n,a,cn=1;
int t;
char ar[10];

int main(void)
{
  scanf("%d",&t);

  while(t--)
  {
    scanf("%lld %s",&n,ar);

    printf("Case %d: ",cn++);
    if(a=n%4)
    {
      if(strcmp(ar,"Alice")==0)
      {
       if(a==1)
        printf("Bob\n");
        else if(a==2 || a==3)
            printf("Alice\n");

      }
      else if(strcmp(ar,"Bob")==0)
      {
         if(a==1 || a==2)
        printf("Bob\n");
        else if(a==3)
            printf("Alice\n");
      }
    }
    else
    {
       printf("Bob\n");
    }
  }
  return 0;
}
