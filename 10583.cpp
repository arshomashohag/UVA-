#include<bits/stdc++.h>

using namespace std;

int par[50005], rnk[50005], i, j, n, m, out, x, y, u, v, cn=1;

int fin(int a){

if(par[a]==a)
    return a;

return (par[a] = fin(par[a]));
}

int main(void)
{

 while(scanf("%d%d",&n,&m) && (n||m) ){
  out=0;
  for(i=1; i<=n; i++)
    {
        par[i]=i;
        rnk[i] = 0;
    }

    for(i=0; i<m; i++){
        scanf("%d%d",&x, &y);
        u = fin(x);
        v = fin(y);
        if(u==v)
             continue;

        n--;
         if(rnk[u]<rnk[v])
            par[u]=v;
         else{
            par[u]=v;
            if(rnk[u]==rnk[v])
                rnk[u]++;
         }
   }


   printf("Case %d: %d\n", cn++, n);

 }


return 0;
}
