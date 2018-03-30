#include<cstdio>
#include<iostream>
using namespace std;

long long int n,out,i,j;


int main(void)
{
    cin>>n;
    if(n%2==0)
        out=(n*n)/2;
    else
        out=((n/2)+1)*((n/2)+1) + ((n/2)*(n/2));
   cout<<out<<endl;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
          if(i%2)
          {
            if(j%2)
                printf("C");
            else
                printf(".");
          }
        else
        {
            if(j%2)
                printf(".");
            else
                printf("C");
        }
      }
      printf("\n");
    }

    return 0;
}

