
#include<cstdio>
#include<iostream>
#include<algorithm>

#define lld long long int

using namespace std;

lld n,out=0,x,y,i,j;
lld ar[1000003];

int main(void)
{
  cin>>n;

  for(i=0;i<n;i++)
  {
    cin>> ar[i];
  }

sort(ar,ar+n);


  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
     out=max(out,(ar[j]%ar[i]));
  }

  cout<<out<<endl;
  return 0;
}
