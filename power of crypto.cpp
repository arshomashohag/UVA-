#include<stdio.h>
#include<math.h>

int main(void)
{
  double p,x,n;
  double k;
  
  while(scanf("%lf%lf",&n,&p)==2)
  {
  k=pow(p,1/n);

   printf("%.0lf\n",k);
  }

return 0;
}
