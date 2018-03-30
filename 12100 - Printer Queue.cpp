#include<bits/stdc++.h>

using namespace std;



int main(void)
{
    int n, m, i, j, in, out, t, p, chkm;
    int chk[12];
    queue< pair<int, int> > proty;
    pair<int, int> mypair;
    bool flag;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&m);
        memset(chk,0,sizeof(chk));


        for(i=0; i<n; i++)
        {
            scanf("%d",&in);
            chk[in]++;
            if(i==m)
            {
                proty.push(make_pair(1,in));
            }
            else
                proty.push(make_pair(0, in));

        }



        out = 0;
        mypair = proty.front();

        while(!proty.empty())
        {
            proty.pop();
            p = mypair.second;
            chkm = mypair.first;

            flag = true;
            for(j=p+1; j<=9; j++)
            {
                if(chk[j]>0)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                out++;
                chk[p]--;

                if(chkm==1)
                    break;
            }

            else
            {
                proty.push(make_pair(chkm, p) );
            }

            mypair = proty.front();
        }
        while(!proty.empty())
        {
            proty.pop();
        }

        printf("%d\n",out);

    }

    return 0;
}
