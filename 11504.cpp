#include<bits/stdc++.h>
#define lld long long  int

using namespace std;

lld par[100004], rnk[100004], save[100004], i, j, k, x, y, u, v, t, n, m, res;


lld fin(lld a){
if(par[a]==a)
    return a;
return (par[a]=fin(par[a]));

}

int main(void)
{

scanf("%lld",&t);

while(t--){
  scanf("%lld%lld", &n, &m);

  for(i=1; i<=n; i++){
    par[i]=i;
    rnk[i]=0;
    save[i]=1;
  }
res=0;
k=0;


  for(i=1; i<=m; i++){
    scanf("%lld%lld", &x, &y);

    u = fin(x);
    v = fin(y);

    if(u!=v ){
             if(save[u]==1 && save[v]==1)
              res++;

        else if(save[u]==1 && save[v]>1 && v!=y)
          res++;


        if(save[u]>1 && save[v]>1)
            res--;

    if(save[u]==1 && save[v]==1)
        k+=2;

    else if(save[u]==1 || save[v]==1)
        k++;



            par[v]=u;
            save[u]+=save[v];

    }
  }

 res+=n-k;


  printf("%lld\n",res);
}


 return 0;
}
