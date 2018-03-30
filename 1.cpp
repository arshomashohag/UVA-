#include<cstdio>

 int n,q,p,cnt;

int main(void)
{
  scanf("%d",&n);
  cnt=0;
  while(n--)
  {
     scanf("%d%d",&p,&q);
     if(p<=(q-2))
        cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}
