#include<cstdio>
#include<iostream>
using namespace std;
int m,n,out,i;

int main(void)
{
   cin>>n>>m;

   if(n%2)
     out=n/2+1;
   else
    out=n/2;

   if(out%m)
   {
     out=out+(m-(out%m));
   }

   if(out>n)
    out=-1;
   cout<<out<<endl;

   return 0;
}
