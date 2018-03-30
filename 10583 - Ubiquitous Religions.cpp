#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstdlib>
#include<list>
#include<cctype>
#define lld long long int

using namespace std;

lld i, a, b, cn=1, n, m, out;
int chk[50020];
set<lld> myset;

int main(void)
{
    while(scanf("%lld%lld",&n,&m)==2 && (n||m))
    {
      memset(chk,0,sizeof(chk));

       out=0;
       for(i=1; i<=m; i++)
       {
           scanf("%lld%lld",&a,&b);

           myset.insert(a);
           myset.insert(b);

             if(chk[a]==0 && chk[b]==0)
             {
                 out++;
             }

            chk[a]=1;
            chk[b]=1;
       }

       out = out + n - myset.size();
         myset.clear();
        printf("Case %lld: %lld\n",cn++, out);
    }

    return 0;
}





