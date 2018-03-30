#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

char in1[12],in2[12],ch;
double out,check;
int i,a,b,un;

int main(void)
{
    cin>>in1;
    cin>>in2;

    a=0;
    b=0;
    un=0;
    for(i=0;in1[i];i++)
    {
        if(in1[i]=='+')
            a++;
        else if(in1[i]=='-')
            a--;

        if(in2[i]=='+')
            b++;
        else if(in2[i]=='-')
            b--;
        else
        un++;
    }
   check=sqrt((a-b)*(a-b));


   if(check==0 && un)
    out=0.5;
  else if(check==0 && !un)
    out=1.0;

   else if(un<check)
    out=0.0;

    printf("%0.12Lf\n",out);

   return 0;
}
