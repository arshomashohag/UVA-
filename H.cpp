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


lld n,li,ri,out,i,j;
int arr[120]={0};

int main(void)
{
    cin>>n;
    cin>>li>>ri;
     for(i=li;i<ri;i++)
     {
         arr[i]=1;
     }
    for(i=1;i<n;i++)
    {
      cin>>li>>ri;
      for(j=li;j<ri;j++)
     {
         arr[j]=0;
     }
    }
   out=0;
    for(i=0;i<=100;i++)
    {
     if(arr[i]==1)
        out++;
    }
  cout<<out<<endl;

    return 0;
}


