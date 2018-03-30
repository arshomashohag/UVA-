#include<stdio.h>

int main()
{
    long long unsigned int i,n,m,p,q,x,len=0, num;
    int count;
    while(scanf("%llu %llu",&n,&m) && (n&&m))
    {
        if(m>n)
        {
            p = n;
            q = m;
        }
        else
        {
            p = m;
            q = n;
        }
        len = 0;
        num=0;
        for(i=p; i<=q; i++)
        {
            x = i;
            count = 0;

            if(i==1)
             count=3;


         else
         {
           if(x%2==0)
                {
                    x = x/2;

                }
                else if(x%2==1)
                {
                    x = 3*x+1;
                }

            while(1)
            {
                if(x==1)
                {
                    count++;
                    break;
                }
                else if(x%2==0)
                {
                    x = x/2;
                    count++;
                }
                else if(x%2==1)
                {
                    x = 3*x+1;
                    count++;
                }
            }

         }

            if(count>len)
            {
                len = count;
                num=i;
            }

       }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",p,q,num,len);
    }
    return 0;
}
