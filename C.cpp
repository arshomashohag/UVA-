
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


lld n,i,j,cnt;
char arr[505][505],d,o;

int flag;
int main(void)
{
    cin>>n;
    getchar();

    for(i=0; i<n; i++)
    {
        scanf("%[^\n]",arr[i]);

        getchar();
    }
    d=arr[0][0];
    o=arr[0][1];

    flag=1;

if(d!=o)
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(((i==j) || (j==n-i-1)))
            {
               if(arr[i][j]!=d)
               {
                flag=0;
                break;
               }
            }
            else if(arr[i][j]!= o)
            {
                flag=0;
                break;
            }
        }

        if(!flag)
            break;
    }

else
flag=0;

  if(flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;


    return 0;
}
