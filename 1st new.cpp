#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define lld long long int

using namespace std;

lld n,out,i,j,ne;

int main(void)
{
    cin>>n;

    if(n%2==0)
    {
       out=n/2;
    }

    else
    {
      out=n/2;
      out=out-n;
    }


    cout<<out<<endl;
 return 0;
}

