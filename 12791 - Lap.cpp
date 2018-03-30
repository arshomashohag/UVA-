#include<cstdio>
#include<cmath>
#define lld long long int

using namespace std;

int main(void)
{
 float x, y, i, j, lx, ly;

 while(scanf("%f%f",&x,&y)==2)
 {
   lx=0;
   ly=0;
   for(i=1;;i++)
   {
       lx = (1/x)*i;
       ly = (1/y)*i;

       if(lx-ly>=1)
       {
           printf("%0.0f\n",ceil(lx));
           break;
       }
   }
 }
  return 0;
}
