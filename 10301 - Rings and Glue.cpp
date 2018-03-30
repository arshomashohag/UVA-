#include<bits/stdc++.h>

using namespace std;


int n, i, j, a, b, u, v, par[105], rnk[105], save[105], out;
double x, y, r, tx, ty, tr, dis;

class node{
 public:
     double xa, yb, rad;
     int ser;
}nd;

vector<node> ring;

double cal_d(double x1, double y1, double x2, double y2){

   return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

}

int fin(int a){
if(par[a]==a)
    return a;

 return (par[a]=fin(par[a]));
}



int main(void)
{
 while(scanf("%d", &n) && n!=-1){

    for(i=1; i<=n; i++){
        scanf("%lf%lf%lf", &x,&y,&r);
           nd.xa = x;
           nd.yb = y;
           nd.rad = r;
           nd.ser=i;

            par[i]=i;
            rnk[i]=0;
            save[i]=1;
           ring.push_back(nd);

    }

 if(n)
    out=1;
 else
    out=0;

  for(i=0; i<n; i++){
        x = ring[i].xa;
        y = ring[i].yb;
        r = ring[i].rad;
        a = ring[i].ser;

    for(j=i+1; j<n; j++){
        tx = ring[j].xa;
        ty = ring[j].yb;
        tr = ring[j].rad;
        b = ring[j].ser;

        if( (dis=cal_d(x, y, tx, ty))<(r+tr) && ( tr==r  || (tr>r && (dis+r)>tr) || (r>tr && (dis+tr)>r )) ){


           u = fin(a);
           v = fin(b);

           if(u!=v){
            if(rnk[u]<rnk[v])
            {
                par[u]=v;
                save[v]+=save[u];
                out = max(save[v], out);
            }

            else{
                par[v]=u;
                save[u]+=save[v];
                 out = max(save[u], out);
                 if(rnk[u]==rnk[v])
                    rnk[u]++;
            }
           }

        }
    }
  }
ring.clear();


    if(out>1)
        printf("The largest component contains %d rings.\n", out);
   else
    printf("The largest component contains %d ring.\n", out);

 }


    return 0;
}
