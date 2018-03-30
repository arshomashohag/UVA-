#include<bits/stdc++.h>
#define INF 130000

using namespace std;

int young[27][27], matured[27][27], n, cost, res;
int i, j, k;
char age, dir, strt, ed, shah, migu;
vector<char> des;

char in[30];

void floyed(void)
{

    for(k=0; k<26; k++)
    {
        for(i=0; i<26; i++)
        {
            for(j=0; j<26; j++)
            {
                young[i][j] = min(young[i][j], young[i][k]+young[k][j]);
                matured[i][j] = min(matured[i][j], matured[i][k]+matured[k][j]);
            }
        }
    }

}


int main(void)
{

    while(scanf("%d", &n) && n)
    {

        for(i=0; i<26; i++)
        {
            for(j=0; j<26; j++)
            {
                if(i!=j)
                {
                    young[i][j]=INF;
                    matured[i][j]=INF;
                }
                else
                {
                    young[i][j]=0;
                    matured[i][j]=0;
                }

            }
        }


        for(i=1; i<=n; i++)
        {
            getchar();

            scanf("%c %c %c %c %d", &age, &dir, &strt, &ed, &cost);

            if(age=='Y')
            {
                if(strt!=ed)
                {
                    young[strt-'A'][ed-'A'] = cost;
                    if(dir=='B')
                        young[ed-'A'][strt-'A'] = cost;
                }
                else
                {
                    young[strt-'A'][ed-'A'] = 0;
                }
            }

            else
            {
                if(strt!=ed)
                {
                    matured[strt-'A'][ed-'A']=cost;
                    if(dir=='B')
                        matured[ed-'A'][strt-'A']=cost;
                }

                else
                {
                    matured[strt-'A'][ed-'A']=0;
                }
            }

        }

        floyed();
        getchar();

        scanf("%c %c", &shah, &migu);

            res=INF;
            j = shah-'A';
            k = migu-'A';
            des.clear();

            for(i=0; i<26; i++)
            {
                if( ( cost = young[j][i]+matured[k][i])<res)
                {

                    res = cost;
                    des.clear();
                    des.push_back(i+'A');
                }
                else if(cost==res)
                {
                    des.push_back(i+'A');
                }
            }

            if(res>=INF)
            {
                printf("You will never meet.\n");
            }
            else
            {
                printf("%d", res);
                sort(des.begin(), des.end());
                k=des.size();
                for(i=0; i<k; i++)
                    printf(" %c", des[i]);
                    printf("\n");
            }




        }




    return 0;
}
