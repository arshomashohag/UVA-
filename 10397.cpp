#include<bits/stdc++.h>

using namespace std;

int points[753][4], par[753], rnk[753],i, j, x, n, m, y, u, v, k, l, cnt;

double dist, d, res;

class node{
public :
    int s, e;
    double wt;

    bool operator<(const node& p)const{
    return wt > p.wt;
    }
};
priority_queue<node> pq;

node nd;


int fin(int a){
return par[a]==a ? a: (par[a]=fin(par[a]));
}

int main(void)
{
    while(scanf("%d",&n)==1){

        for(i=1; i<=n; i++){
           scanf("%d%d",&x,&y);
            points[i][0]=x;
            points[i][1]=y;
            points[i][2]=-1;
            par[i]=i;
            rnk[i]=0;
        }
    scanf("%d", &m);
    for(i=1; i<=m; i++){
        scanf("%d%d",&k,&l);
        points[k][2]=l;
        points[l][2]=k;
    }



       for(i=1; i<n; i++){
            x=points[i][0];
             y=points[i][1];
        for(j=i+1; j<=n; j++){
           u=points[j][0];
           v=points[j][1];
           k = x-u;
           l = y-v;

           if(points[i][2]==j)
            dist=0.0;
          else
            dist = sqrt( (double)(k*k + l*l) );

           nd.s = i;
           nd.e = j;
           nd.wt = dist;
           pq.push(nd);
        }

       }

    res=0;
    cnt=0;
    n--;
    while(!pq.empty()){
        nd = pq.top();
        pq.pop();

        u = fin(nd.s);
        v = fin(nd.e);

        if(u!=v){
            res += nd.wt;
             cnt++;

            if(rnk[u]<rnk[v])
                par[u]=v;
            else{
                par[v]=u;
                if(rnk[u]==rnk[v])
                    rnk[u]++;
            }
        }
    if(cnt==n)
        break;
    }
   while(!pq.empty())
    pq.pop();


   printf("%0.2lf\n", res);

    }



    return 0;
}
