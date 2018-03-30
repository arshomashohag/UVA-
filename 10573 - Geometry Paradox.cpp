#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#define pi 2*acos(0)
using namespace std;

long long int t, i;
char ar[100];

double r1, r2, out;


int main(void)
{

    scanf("%lld",&t);

    while(t--)
    {
        getchar();
      scanf("%[^\n]",ar);

      if(sscanf(ar,"%lf%*c%lf",&r1,&r2)==2 && (r1>0.0 && r2>0.0))
      {
        out = ( pi*(r1+r2)*(r1+r2) )-((pi*r1*r1)+(pi*r2*r2));
        printf("%0.4lf\n",out);
      }
       else
        printf("Impossible.\n");

    }

return 0;
}
