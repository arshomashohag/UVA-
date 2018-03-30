#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<algorithm>
#include<cstring>

using namespace std;
int n,ai[102],i,dif[102],j,out,a,b,maxd=-1;


int main(void)
{
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>ai[i];
        if(i==2)
            a=ai[2]-ai[0];

        if(i>0 && maxd<(ai[i]-ai[i-1]))
        {
          maxd=ai[i]-ai[i-1];
        }
        if(i>2)
        {
            if(a>(ai[i]-ai[i-2]))
            {
                a=ai[i]-ai[i-2];
                b=i-1;
            }
        }
    }

    if(maxd>a )
        cout<<maxd<<endl;
    else
      cout<<a<<endl;

    return 0;
}
