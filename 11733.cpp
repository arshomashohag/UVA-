#include<bits/stdc++.h>
#define lld long long int


using namespace std;


lld t,  n, m, a, i, j, x, y, c, u, v, par[100003], rnk[100003];
lld na, cost, cn=1;

class node{
public :
    lld s, e, w;

    bool operator<(const node& p)const{
    return w>p.w;

    }
}nd;


priority_queue<node> pq;


lld fin(lld a){
if(par[a]==a)
    return a;
return (par[a]=fin(par[a]));
}


int main(void)
{

 scanf("%lld",&t);

  while(t--){
     scanf("%lld%lld%lld",&n, &m, &a);
     for(i=1; i<=m; i++)
     {
         scanf("%lld%lld%lld",&x,&y,&c);

         nd.s=x;
         nd.e=y;
         nd.w=c;
         pq.push(nd);

         rnk[x]=0;
         rnk[y]=0;
         par[x]=x;
         par[y]=y;
     }
      na=n;
      cost=0;
     while(!pq.empty()){
       nd = pq.top();
       pq.pop();
        x = nd.s;
        y = nd.e;
        c = nd.w;

        u = fin(x);
        v = fin(y);

        if(u!=v){
          if(c<a)
          {
           na--;
           cost+=c;
          }

          if(rnk[u]<rnk[v]){
            par[u]=v;

          }
          else{
            par[v]=u;
            if(rnk[u]==rnk[v])
                rnk[u]++;
          }
        }
     }
     cost +=a*na;

     printf("Case #%lld: %lld %lld\n",cn++, cost, na);
  }



    return 0;
}
