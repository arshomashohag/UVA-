#include<bits/stdc++.h>

using namespace std;


int t, n, m, i, j, a, b, c, ct, wt, x, y, u, v, par[105], rnk[105], save[105], tres, res1, res2;
class node{
public:
    int s, e, w;

    bool operator<(const node& p)const{
     return w>p.w;
    }
};
node nd;


priority_queue<node> pq;
vector<node> temp, mst, mst2;
vector<node>::iterator it1, it2, it1e, it2e;


int fin(int a){
if(par[a]==a)
    return a;
return (par[a]=fin(par[a]));
}

bool check(){
  it1=mst.begin();
  it2 = mst2.begin();
  it1e = mst.end();

  while(it1!=it1e)
    {
        if( (*it1).s!= (*it2).s || (*it1).e!=(*it2).e)
         return true;

      it1++;
      it2++;
    }

  return false;
}

int main(void)
{

scanf("%d", &t);

while(t--){
 scanf("%d%d",&n, &m);
 memset(save, 0, sizeof(save));


  for(i=1; i<=m; i++){
    scanf("%d%d%d",&a,&b,&wt);
   nd.s = a;
   nd.e = b;
   nd.w = wt;

    if(a!=b)
    {
    par[a]=a;
    par[b]=b;
    rnk[a]=0;
    rnk[b]=0;
    save[a]++;
    save[b]++;

    pq.push(nd);
    }

  }

res1=0;
c=0;

while(!pq.empty()){
   nd = pq.top();
   pq.pop();

   u = fin(nd.s);
   v = fin(nd.e);

   if(u!=v){
        c++;
        mst.push_back(nd);

     if(rnk[u]<rnk[v]){
        par[u]=v;
         }
      else{
            par[v]=u;
            if(rnk[u]==rnk[v])
                rnk[u]++;
        }


     res1+= nd.w;
     if(c==n-1)
        break;
   }
   else
    temp.push_back(nd);

}

while(!pq.empty())
    {
        temp.push_back(pq.top());
        pq.pop();
    }

 a = temp.size();
 res2 = res1;

for(i=1; i<=n; i++){
    par[i]=i;
    rnk[i]=0;
}


  printf("%d %d\n", res1);
}


    return 0;
}
