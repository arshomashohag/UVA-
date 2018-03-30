#include<cstdio>
#include<cstring>


using namespace std;

char A[1000004],B[1000004],*loc;
long long int i,la,lb,out;
int t,cn=1;

int main(void)
{

  scanf("%d",&t);
  getchar();
  while(t--)
  {
    scanf("%s",A);
    scanf("%s",B);
    out=0;
    loc=A;
    while(loc=strstr(loc,B))
    {
      out++;
      loc++;
    }
    printf("Case %d: %lld\n",cn++,out);
  }
  return 0;
}
