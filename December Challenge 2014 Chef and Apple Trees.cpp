#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int t;
bool ar[100005];
long long int n,i,cnt;

int main(void)
{
  cin>>t;
  while(t--)
  {
      memset(ar,0,sizeof(ar));
      cnt=0;
      cin>>n;
      while(n--)
      {
          cin>>i;
          if(ar[i]==0)
          {
             cnt++;
             ar[i]=1;
          }
      }
      cout<<cnt<<endl;
  }

    return 0;
}
