#include<cstdio>
#include<algorithm>
#include<iostream>
#define lld long long int

using namespace std;

lld n, i, in1, in2,ar1[500005],ar2[500005];
bool flag;
int main(void)
{

    while(scanf("%lld",&n) && n)
    {
      for(i=0;i<n;i++)
      {
         cin>>ar1[i]>>ar2[i];

      }
    sort(ar1,ar1+n);
    sort(ar2,ar2+n);

    flag = false;

     for(i=0;i<n;i++)
     {
         if(ar1[i]!= ar2[i])
         {
             flag = true;
             break;
         }
     }

     if(!flag)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

    }

    return 0;
}

