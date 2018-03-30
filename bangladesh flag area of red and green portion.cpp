 #include<stdio.h>
 #include<math.h>

 int main(void)
 {
  double length,radious,width,ar_r,ar_c;
  int t,i,j;

  while(scanf("%d",&t)==1)
  {
   for(i=1;i<=t;i++)
   {
	scanf("%lf",&length);

	width=0.6*length;
	ar_r=length*width;

	radious=0.2*length;
	ar_c=(acos(-1.0))*radious*radious;

	printf("%.2lf %.2lf\n",ar_c,(ar_r-ar_c));
  }
  }

  return 0;
 }
