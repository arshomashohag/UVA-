#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main(void)
{
 double r, n, out, ang, b, apo;

  while(scanf("%lf%lf",&r,&n)==2)
  {
    ang = (180 - (360.0/n))/2.00;
    ang = 90 - ang;

    b = r*sin((ang*pi)/180.00 );

    b *= 2;

   apo = r*cos((pi/n));
     out =  (apo*b*0.5)*n;

     printf("%0.3lf\n",out);
  }

  return 0;
}
