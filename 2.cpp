#include<bits/stdc++.h>

using namespace std;

class node{
public :
    int x, y, wgt;

    bool operator<(const node& par)const{

            return wgt > par.wgt;
    }
};

priority_queue<node> graph;
int m, n, i, j, k, out, a, b, w, par[200005], freq[200005], u, v, cnt, tot;

node nd;

int fin(int a){

  if(par[a]==a)
    return a;
  return fin(par[a]);

}

void UNION(int a,int b)
{
    if(freq[a]<freq[b])
        par[a]= b;
    else
    {
        par[b]= a;
        if(freq[a]==freq[b])
        freq[a]++;
    }
}

int main(void)
{
    while(scanf("%d%d",&m,&n)==2 && (m||n)){
             tot = 0;
        for(i=0; i<n; i++){
            scanf("%d%d%d",&a,&b,&w);
              nd.x = a;
              nd.y = b;
              nd.wgt = w;
              tot+=w;
              freq[i]=0;
            graph.push(nd);
             par[a]=a;
            par[b]=b;
        }

        out=0;
        cnt=0;
        m--;
         while(!graph.empty()){
            nd = graph.top();
            graph.pop();
            u = fin(nd.x);
            v = fin(nd.y);

            if(u!=v){
                    UNION(u, v);
                out+=nd.wgt;

                cnt++;
                if(cnt==m)
                    break;
            }

        }


    printf("%d\n",tot-out);

    }


    return 0;
}
