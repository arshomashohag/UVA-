#include<cstdio>
#include<iostream>

using namespace std;

long long int a,b,c,i,out,j;

int main(void)
{
    cin>>a>>b>>c;


   if(a%c)
    i=a/c+1;
   else
    i=a/c;
   if(b%c)
    j=b/c+1;
    else
        j=b/c;
    out=i*j;

    cout<<out<<endl;

    return 0;
}
