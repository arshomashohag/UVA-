#include<bits/stdc++.h>

using namespace std;

int par[200005];
int nf[200005];

map<string , int> myM;

string x, y;
int t, out, f, n, m, u, v, i, j, r, ind, mx, my;

int fin(int a){
  if(par[a]==a)
    return a;
   r++;
  return (par[a] = fin(par[a]));
}


int res(int f, int s){
  u = fin(f);
  v = fin(s);
  if(u!=v)
     {
         par[v] = u;
         nf[u]+=nf[v];
         nf[v]=0;

     }

        return nf[u];
}



int main(void)
{

scanf("%d",&t);

while(t--){
    scanf("%d",&f);
  ind=1;

for(i=1; i<=f; i++){
    cin>>x>>y;

    if(myM.find(x) == myM.end()){
        myM.insert(make_pair(x,ind));
        par[ind]=ind;
        nf[ind]=1;
         mx = ind;
         ind++;
    }
    else
        mx = myM[x];

    if(myM.find(y) == myM.end()){
        myM.insert(make_pair(y,ind));
        par[ind]=ind;
        nf[ind]=1;
         my = ind;
         ind++;
    }
    else
        my = myM[y];


    printf("%d\n", res(mx, my));
 }
 myM.clear();

}
return 0;

}
