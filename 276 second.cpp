#include<cstdio>
#include<iostream>
#include<algorithm>

#define lld long long int

using namespace std;

lld n,out,x,y,i;
lld x1=-1000000007,x2=1000000007,y1=-1000000007,y2=1000000007;


int main(void)
{
  cin>>n;

  for(i=1;i<=n;i++)
  {
      cin>>x>>y;

      x1=max(x1,x);
      x2=min(x2,x);

      y1=max(y1,y);
      y2=min(y2,y);
}

 out=max((x1-x2),(y1-y2));
  cout<<out*out<<endl;

  return 0;
}
