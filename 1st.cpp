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
      ne=n/2;
      i=(ne*(n+2))/2;

      j=(ne*n)/2;
    }

    else
    {
        ne=n/2;
        i=(ne*(n+1))/2;
        ne=n-ne;
         j=(ne*n)/2;
    }
    out=i-j;

    cout<<out<<endl;
 return 0;
}
