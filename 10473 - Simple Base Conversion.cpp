#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#define lld long long int

using namespace std;

lld z, in, n, t, base;
int dig, i;
char str[40], ch, ar[]={"ABCDEF"};
 string out;

int main(void)
{
    while(scanf("%[^\n]",str)==1)
    {

       if(sscanf(str,"%lld%*c%lld",&z, &in)==2)
       {
        base = 1;
        t = 0;
         while(in)
         {
           t = t+ (base*(in%10));
           in = in/10;
           base = base*16;
         }

         printf("%lld\n",t);

       }

       else
       {
           if( z<0)
            break;
        i=0;

        while(z)
        {
            dig = z%16;
            if(dig<=9)
                str[i++]=(dig+48);
            else if(dig>9)
            {
              str[i++] = ar[dig-10];
            }
            z = z/16;
        }
        str[i]='\0';
        i--;
        while(i>=0)
            {
                out.push_back(str[i]);
                i--;
            }

         if(out.size()>0)
         cout<<"0x"<<out<<endl;
         else
            cout<<"0x0"<<endl;
         out.clear();

       }

       getchar();
    }


    return 0;

}
