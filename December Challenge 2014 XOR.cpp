#include<cstdio>
#include<iostream>

using namespace std;

int t,k,a[1003],i,j,n,out;
int save[1001][1001];

int dp(int ind,)

int main(void)
{
    cin>>t;
    memset(save,0,sizeof(save));
    while(t--)
    {
      cin>>n>>k;
      for(i=0;i<n;i++)
            cin>>a[i];

      cout<<max((k|0),dp(0,k));
    }


    return 0;
}
