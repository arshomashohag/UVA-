#include<cstdio>
#include<cstdlib>

int main(void)
{
    int c1,c2,c3,c5,c4,res,bo;

  scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);

      res=c1+c2+c3+c4+c5;
      bo=res/5;

      if(bo*5==res && bo)
        printf("%d",bo);
      else
        printf("-1");
  return 0;

}
