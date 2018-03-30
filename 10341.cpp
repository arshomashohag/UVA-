#include<bits/stdc++.h>

#define ESP 1e-7

using namespace std;

int  p, q, r, s, t, u;
double mid, strt, e;

double fn(double m){

 return (p*exp(-m) + q*sin(m) + r*cos(m) + s*tan(m) + t*m*m+ u);

}


int main(void)
{

 while(scanf("%d%d%d%d%d%d", &p, &q, &r, &s, &t, &u)==6){

  if(fn(0)*fn(1)>0)
  {
      printf("No solution\n");
      continue;
  }
     strt=0;
     e=1;



     while( (strt+ESP)<e){
        mid = (strt+e)/2.00;

        if(fn(strt)*fn(mid)<=0){
            e = mid;
        }
        else
            strt=mid;
     }


        printf("%0.4lf\n",(strt+e)/2.00);

 }


    return 0;
}
