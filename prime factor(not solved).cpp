#include<cstdio>
#include<cmath>
#define lld long long int

 lld g,i,tak;

lld isprime(lld a)
{
   lld c,sqr;
   sqr=sqrt(a);
   for(c=2;c<=sqr;c++)
   {
       if(a%c==0)
        return c;
   }
   return 1;
}

int main(void)
{

    while(scanf("%lld",&g)==1)
    {
        if(g==0)
            break;
        if(g<0)
        {
            printf("%lld = -1 x ",g);
            g=(-1)*g;
        }
        else
            printf("%lld = ",g);

        if(isprime(g)==1)
            printf("%lld",g);

        else
        {
          for(i=2;;)
          {
              if(g<=1)
                break;
            if(g%i==0)
            {
                g=g/i;
                if(g>1)
                  printf("%lld x ",i);
                  else
                    printf("%lld",i);
                continue;
            }
           if((tak=isprime(g))>1)
            {
              i=tak;
              continue;
            }
            else if(tak==1)
            {
                printf("%lld",g);
                break;
            }
          }

        }

        printf("\n");
    }
    return 0;
}
