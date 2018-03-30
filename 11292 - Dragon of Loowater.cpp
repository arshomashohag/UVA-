#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;


int n,m,i,in;

long long out;

int main(void)
{
    vector<int> nv,mv;
    vector<int>::iterator itn,itm;

    while(scanf("%d%d",&n,&m)==2)
    {
      if(n==0 && m==0)
        break;

        for(i=1; i<=n; i++)
        {
            scanf("%d",&in);
            nv.push_back(in);
        }
        sort(nv.begin(),nv.end());


        for(i=1; i<=m; i++)
        {
            scanf("%d",&in);
            mv.push_back(in);
        }
        sort(mv.begin(),mv.end());

        itm=mv.begin();

        out=0;

        for(itn=nv.begin(); itn!=nv.end() && itm!=mv.end(); itn++)
        {
            while(itm!=mv.end())
            {
                if( (*itn)<=(*itm))
                {
                    out=out+(*itm);
                    itm++;
                    break;
                }

                itm++;
            }
        }

        if(itm==mv.end() && itn!=nv.end())
        {
            printf("Loowater is doomed!\n");
        }
       else if(itm==mv.end() && itn==nv.end() && ((*(itm-1))<(*(itn-1))))
       {
          printf("Loowater is doomed!\n");
       }
        else
        {
            printf("%lld\n",out);
        }
      nv.clear();
      mv.clear();
    }
    return 0;
}
