#include<cstdio>
#include<algorithm>


using namespace std;

int a,b,c,out,i;

int main(void)
{
  scanf("%d%d%d",&a,&b,&c);
  out=0;

  out=max(out,(a*b*c));
  out=max(out,(a+b+c));
  out=max(out,((a+b)*c));
  out=max(out, (a*(b+c)));
  out=max(out, (a+(b*c)));
  out=max(out,((a*b)+c));

  printf("%d\n",out);

  return 0;

}
