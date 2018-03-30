#include<cstdio>
#include<cstring>
#include<iostream>
#include<cctype>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>

#define lld long long int

using namespace std;


lld k,a,b,v,out,s,nb;

int main(void)
{

 cin>>k>>a>>b>>v;
  nb=0;
  while(a>0)
  {
   if((k-1)<=b)
   {
       a=a-(k*v);
       b=b-(k-1);
       nb++;
   }
   else if(b>0)
   {
       a=a-((b+1)*v);
       b=0;
       nb++;
   }
   else
   {
     a=a-v;
     nb++;
   }
  }

  cout<<nb<<endl;
 return 0;
}

