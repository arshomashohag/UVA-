#include<cstdio>
#include<vector>
#include<iostream>

using namespace std;

long long int n,q,k,v,i,j,in;
vector<long long int> ar[100002];
int main(void)
{
 while(scanf("%lld%lld",&n,&q)==2)
   {
       for(i=0;i<100002;i++)
       {
           ar[i].clear();
       }
       for(i=1;i<=n;i++)
        {
            scanf("%lld",&in);
            ar[in].push_back(i);
        }

       while(q--)
       {
           scanf("%lld%lld",&k,&v);

           if(ar[v].size()<k)
            printf("0\n");
           else
             cout<<ar[v].at(k)<<endl;

       }
   }
   return 0;
}
