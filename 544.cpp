#include<bits/stdc++.h>

using namespace std;

class node
{
public :
    int wgt;
    string a, b;

    bool operator<(const node& par)const
    {

        return wgt < par.wgt;
    }
};

priority_queue<node> graph;
long long int m, n, i, j, k, out, w, cnt, tot;
string x, y, u, v;

map<string, string> par;
map<string, int> freq;

node nd;

string fin(string a)
{

    if(par[a]==a)
        return a;
    return fin(par[a]);

}

/*void UNION(long long int a,long long int b)
{
    if(freq[a]<freq[b])
        par[a]= b;
    else
    {
        par[b]= ;
        if(freq[a]==freq[b])
        freq[a]++;
    }
}*/

int main(void)
{
    while(scanf("%lld%lld",&m,&n) && (m||n))
    {
        tot = 0;
        for(i=0; i<n; i++)
        {
            cin>>x>>y>>w;
            nd.a = x;
            nd.b = y;
            nd.wgt = w;
            freq[x]=0;
            freq[y]=0;
            graph.push(nd);
            par[x]=x;
            par[y]=y;
        }

        out=0;
        cnt=0;
        m--;
        while(!graph.empty())
        {
            nd = graph.top();
            graph.pop();
            u = fin(nd.a);
            v = fin(nd.b);

            if(u!=v)
            {
                //UNION(u, v);

                if(freq[u]<freq[v])
                    par[u]= v;
                else
                {
                    par[v]= u;
                    if(freq[u]==freq[v])
                        freq[u]++;
                }
                out+=nd.wgt;

                cnt++;
                if(cnt==m)
                    break;
            }

        }
        while(!graph.empty())
            graph.pop();

        printf("%lld\n",out);

    }


    return 0;
}
