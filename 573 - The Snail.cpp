#include<cstdio>
#include<cmath>

using namespace std;

float h,u,d,f,out,cl,cmp=0.0000, ldc;
int day;

int main(void)
{
    while(scanf("%f%f%f%f",&h,&u,&d,&f) && (h || u || d || f) )
    {

        f=(u*f)/100.00;
        if(u>h)
            out = u;
        else
            out = u-d;
        day=1;
        ldc = u;
        while(out>=0 && out<h)
        {
           cl = ldc - f;
           ldc = cl;

           day++;
           if((out+cl)>h)
            {
                out += cl;
                break;
            }

            out += cl - d;

        }

      if(out>h)
      {
          printf("success on day %d\n",day);
      }
      else if(out<=0)
      {
          printf("failure on day %d\n",day);
      }

    }

    return 0;
}
