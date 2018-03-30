#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

long long int a,b,x,y,out1,out2,out3,out4,par1,par2;


int main(void)
{
    cin>>a>>b>>x>>y;
    out1=0;
    out2=0;
    out3=0;
    out4=0;
    par1=0;
    par2=0;
    if(((a/x)*x<=a) && (y*(a/x)<=b))
       {
           out1=(a/x)*x;
            out2=(a/x)*y;
            par1=out1*out2;
       }
  if(((b/y)*y<=b) && (x*(b/y)<=a))
    {
       out4=(b/y)*y;
       out3=(b/y)*x;
       par2=out3*out4;
    }

if(par1==0 && par2==0)
{
    cout<<'0'<<' '<<'0'<<endl;
}

 else if(par1>par2)
  {
      cout<<out1<<' '<<out2<<endl;
  }
  else
   {
      cout<<out3<<' '<<out4<<endl;
  }

    return 0;
}
