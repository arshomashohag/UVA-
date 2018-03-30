#include<cstdio>
#include<cstring>
#include<iostream>
#include<cctype>
#include<algorithm>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<map>

#define lld long long int

using namespace std;


lld n,x,i,j,m=0,p=0,xi,dif,out;

int main(void)
{
    cin>>n>>x;

    for(i=0;i<n;i++)
    {
        cin>>xi;

      if(xi<0)
        m=m+abs(xi);
      else
        p=p+xi;
    }

   dif=abs(m-p);
   if(dif>x && dif%x)
    out=(dif/x)+1;
   else if(dif>x)
    out=dif/x;
   else if(dif==0)
    out=0;
   else
    out=1;

   cout<<out<<endl;

    return 0;
}
