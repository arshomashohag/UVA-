#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<list>
#define lld long long int

using namespace std;

lld t, nc, nq, i, j, k;
string name1, name2;
int ch1, ch2;
int chk[30];
vector<int> ar[30];
vector<int>::iterator it1, it2;


void bfs(int x, int y)
{
    int par[30];
    queue< int > myq;
    list< int > pr;

    int a, b;

    myq.push(x);
    chk[x]=1;

    while(!myq.empty())
    {
        a = myq.front();

        if(a==y)
        {
            while(a!=x)
            {
                pr.push_front(a);
                a=par[a];
            }

            pr.push_front(a);

            break;
        }

        it1 = ar[a].begin();
        it2 = ar[a].end();
        myq.pop();

        while(it1 != it2)
        {
            b = *it1;

            if(chk[b]!=1)
            {
                myq.push(b);
                par[b]=a;
                chk[b]=1;
            }
            it1++;
        }
    }

    while(!pr.empty())
    {
        b= pr.front();
        printf("%c",(b+65));
        pr.pop_front();
    }

}


int main(void)
{
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld",&nc,&nq);
        for(i=0; i<nc; i++)
        {
            cin>>name1>>name2;
            ch1 = name1[0] - 65;
            ch2 = name2[0] - 65;

            ar[ch1].push_back(ch2);
            ar[ch2].push_back(ch1);
        }


        for(i=1; i<=nq; i++)
        {
            memset(chk,0, sizeof(chk));

            cin>>name1>>name2;

            ch1 = name1[0] - 65;
            ch2= name2[0] - 65;

            bfs(ch1, ch2);
            printf("\n");
        }

        if(t>0)
            printf("\n");

        for(i=0; i<27; i++)
            ar[i].clear();

    }

    return 0;
}
