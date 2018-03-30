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


lld a,b,i,j,c;

int main(void)
{
    cin>>a>>b;

    if(a>=b)
    {
        cout<<((a*a)-(b*b))<<endl;
        for(i=1;i<=a;i++)
            cout<<'o';
        for(i=1;i<=b;i++)
        cout<<'x';

        cout<<endl;
    }
   else
   {
       c=0;
    cout<<'-'<<(b-a)*(b-a)<<endl;
    for(i=1;i<=(b+a);i++)
    {
        if(i%2==0 && c<a)
        {
            cout<<'o';
            c++;
        }
        else
        cout<<'x';
    }

    cout<<endl;
   }


    return 0;
}

