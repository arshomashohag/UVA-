#include<bits/stdc++.h>

using namespace std;

int t, u, v, n, m, i, j, x, y, par[30005], rnk[30005], nof[30005], res;



int fin(int a){
if(par[a]==a)
    return a;
return (par[a]=fin(par[a]));
}

int main(void)
{
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&m);
        res=-1;

        for(i=1; i<=n; i++)
        {
            par[i]=i;
            rnk[i]=0;
            nof[i]=1;
        }

        for(i=1; i<=m; i++)
        {
            scanf("%d%d",&x,&y);

            u = fin(x);
            v = fin(y);

            if(u!=v)
            {

                if(rnk[u]<rnk[v])
                    {
                        par[u]=v;
                        nof[v]+=nof[u];
                        res = max(res, nof[v]);
                        nof[u]=0;
                    }
                else
                {
                    par[v] = u;

                    nof[u]+=nof[v];
                        nof[v]=0;
                    res=max(res, nof[u]);

                    if(rnk[u]==rnk[v])
                        rnk[u]++;
                }
            }

        }

        printf("%d\n", res);
    }



    return 0;
}
