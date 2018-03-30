#include<bits/stdc++.h>

using namespace std;

class node{
public :
    int x, y, wgt;

    bool operator<(const node& par)const{

            return wgt > par.wgt;
    }
};

priority_queue<node> pq;
int m, n, i, j, k, out, a, b, w, par[200005], u, v, cnt, tot;
vector<int> graph[200005];

node nd;

int main(void)
{
    while(scanf("%d%d",&m,&n)==2 && (m||n)){
             tot = 0;
        for(i=0; i<n; i++){
            scanf("%d%d%d",&a,&b,&w);

            graph[a].push(w);
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
                  par[u]=v;
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

