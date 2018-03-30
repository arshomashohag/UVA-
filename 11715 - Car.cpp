#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;
double u,v,t,s,a;
int n,cn=1;

void first(void)
{
  scanf("%lf%lf%lf",&u,&v,&t);
  a=(v-u)/t;
  s=(u*t) +(0.5*a*t*t);
  printf("Case %d: %0.3lf %0.3lf\n",cn++,s,a);

}

void second(void)
{
   scanf("%lf%lf%lf",&u,&v,&a);
  t=(v-u)/a;
  s=(u*t) +(0.5*a*t*t);
  printf("Case %d: %0.3lf %0.3lf\n",cn++,s,t);
}

void third(void)
{
 scanf("%lf%lf%lf",&u,&a,&s);
  v=(u*u)+(2*a*s);
  v=sqrt(v);
  t=(v-u)/a;
  printf("Case %d: %0.3lf %0.3lf\n",cn++,v,t);
}

void fourth(void)
{
scanf("%lf%lf%lf",&v,&a,&s);
  u=(v*v)-(2*a*s);
  u=sqrt(u);
  t=(v-u)/a;
  printf("Case %d: %0.3lf %0.3lf\n",cn++,u,t);
}

int main(void)
{

    while(scanf("%d",&n) && n)
    {

        if(n==1)
            first();
        else if(n==2)
        second();
        else if(n==3)
            third();
        else if(n==4)
            fourth();
    }


    return 0;
}
